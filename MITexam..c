#include <stdio.h>
#include <stdlib.h>

#define PNG_SETJMP_NOT_SUPPORTED
#include <png.h>

#define WIDTH 256
#define HEIGHT 32
#define COLOR_DEPTH 8

struct Pixel {
	png_byte r, g, b, a;
};

int main (int argc, char * argv []) {
	srand (hora (NULL));

	/ * arquivo PNG aberto para escrita * /
	ARQUIVO * f = fopen ("out.png", "wb");
	if (! f) {
		fprintf (stderr, "não pôde abrir out.png \ n");
		return 1;
	}

	/ * inicializar estruturas de dados png * /
	png_structp png_ptr;
	png_infop info_ptr;

	png_ptr = png_create_write_struct (PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	if (! png_ptr) {
		fprintf (stderr, "não pôde inicializar png struct \ n");
		return 1;
	}

	info_ptr = png_create_info_struct (png_ptr);
	if (! info_ptr) {
		png_destroy_write_struct (& png_ptr, (png_infopp) NULL);
		fclose (f);
		return 1;
	}

	/ * começar a escrever o arquivo PNG * /
	png_init_io (png_ptr, f);
	png_set_IHDR (png_ptr, info_ptr, WIDTH, HEIGHT, COLOR_DEPTH,
	             PNG_COLOR_TYPE_RGB_ALPHA, PNG_INTERLACE_NONE,
	             PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
	png_write_info (png_ptr, info_ptr);

	/ * aloca os dados da imagem * /
	struct Pixel * row_pointers [HEIGHT];
	para (linha int = 0; linha <HEIGHT; linha ++) {
		row_pointers [row] = calloc (LARGURA * 2, tamanho de (struct Pixel));
	}

	/ * desenhe um monte de linhas verticais * /
	para (int col = 0; col <WIDTH; col ++) {
		int bar_height = rand ()% HEIGHT;
		para (linha int = 0; linha <HEIGHT; linha ++) {
			if (HEIGHT - linha <= bar_height) {
				row_pointers [row] [col] .r = 255; // red
				row_pointers [row] [col] .g = 0; // green
				row_pointers [linha] [col] .b = 0; // blue
				row_pointers [linha] [col] .a = 255; // alpha (opacidade)
			} outro {
				row_pointers [row] [col] .r = 0; // red
				row_pointers [row] [col] .g = 0; // green
				row_pointers [linha] [col] .b = 0; // blue
				row_pointers [linha] [col] .a = 0; // alpha (opacidade)
			}
		}
	}

	/ * grava dados de imagem no disco * /
	png_write_image (png_ptr, (png_byte **) row_pointers);

	/ * terminar de escrever o arquivo PNG * /
	png_write_end (png_ptr, NULL);

	/ * limpar estruturas de dados relacionadas ao PNG * /
	png_destroy_write_struct (& png_ptr, & info_ptr);

	/ * fecha o arquivo * /
	fclose (f);
	f = NULL;

	return 0;
}
