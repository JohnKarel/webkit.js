/* Generated by configure.  Do not edit */
#ifndef CAIRO_FEATURES_H
#define CAIRO_FEATURES_H

#ifdef  __cplusplus
# define CAIRO_BEGIN_DECLS  extern "C" {
# define CAIRO_END_DECLS    }
#else
# define CAIRO_BEGIN_DECLS
# define CAIRO_END_DECLS
#endif

#ifndef cairo_public
# define cairo_public
#endif

// #define CAIRO_VERSION_MAJOR 1
// #define CAIRO_VERSION_MINOR 4
// #define CAIRO_VERSION_MICRO 8
// #define CAIRO_VERSION_STRING "1.4.8"
#undef CAIRO_HAS_GL_SURFACE
#undef CAIRO_HAS_GLES_SURFACE
#undef CAIRO_HAS_SVG_SURFACE
#undef CAIRO_HAS_PDF_SURFACE
#undef CAIRO_HAS_PS_SURFACE

#define CAIRO_HAS_IMAGE_SURFACE 1
#define CAIRO_HAS_GLESV2_SURFACE 1
#define CAIRO_HAS_EGL_SURFACE 1
#define CAIRO_HAS_PNG_FUNCTIONS 1
#define CAIRO_HAS_FT_FONT 1
#define CAIRO_HAS_FC_FONT 1
#define CAIRO_HAS_EGL_FUNCTIONS 1

#endif
