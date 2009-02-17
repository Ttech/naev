/*
 * See Licensing and Copyright notice in naev.h
 */



#ifndef WGT_INPUT_H
#  define WGT_INPUT_H


/**
 * @brief The input widget data.
 */
typedef struct WidgetInputData_ {
   char *input; /**< Input buffer. */
   int max; /**< Maximum length. */
   int oneline; /**< Is it a one-liner? no '\n' and friends */
   int view; /**< View position. */
   int pos; /**< Cursor position. */
} WidgetInputData;


/* Required functions. */
void window_addInput( const unsigned int wid,
      const int x, const int y, /* position */
      const int w, const int h, /* size */
      char* name, const int max, const int oneline );

/* Misc functions. */
char* window_getInput( const unsigned int wid, char* name );


#endif /* WGT_INPUT_H */
