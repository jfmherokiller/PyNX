#include <stdio.h>
#include <SDL.h>
#include <SDL_syswm.h>
#include "EGL/egl.h"
#include "GLES2/gl2.h"

#include "eglsupport.h"

EGLDisplay display;
EGLSurface surface;
EGLConfig config;
EGLContext context;

int initialized = 0;

char error_message[100];

int egl_available() {
	return 1;
}

// Checks for an EGL error. Returns an error string if there is one,
// or NULL otherwise.
char *egl_error(char *where) {
	EGLint error;

	error = eglGetError();

	if (error == EGL_SUCCESS) {
		return NULL;
	}

	snprintf(error_message, 100, "Error %s (egl error 0x%x)", where, error);
	return error_message;
}

#define egl_check(where) { char *rv = egl_error(where); if (rv) return rv; }

/* Sets up an OpenGL ES 2 context. Returnes NULL if it succeeds, or
 * an error message on failure.
 */
char *egl_init(SDL_Window *sdl_window, int interval) {
    return NULL;
}

void egl_swap() {

}

void egl_quit() {
	// Does nothing at the moment.
}
