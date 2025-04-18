/*********************************************************************
 *
 *       Local functions, generate fault with nice call stack
 *
 **********************************************************************
 */

#include <string.h>

static const char _abLogo[128*32];
static const char _abIcon[32*32];

#define _NUM_IMAGES 2
static struct {
  const char* sName;
  int         Width;
  int         Height;
  const char* pData;
} _aImg[_NUM_IMAGES] = {
  {"Logo.bmp", 128, 32, _abLogo},
  {"Icon.bmp", 32,  32, _abIcon}
};

/*********************************************************************
*
*       _GetPixel()
*
*  Function description
*   Get one pixel within an image.
*/
static char _GetPixel(const char* pImg, int x, int y, int Width, int Height) {
  return *(pImg +  (y * Width) + x);
}

/*********************************************************************
*
*       _GetImage()
*
*  Function description
*   Find the given image and get its informaiton.
*
*  Return value
*    == NULL: Image not found. Width and height not valid.
*    != NULL: Pointer to the image data.
*/
static const char* _GetImage(const char* sName, int* pWidth, int* pHeight) {
  int i;

  for (i = 0; i < _NUM_IMAGES; i++) {
    if (strcmp(sName, _aImg[i].sName) == 0) {
      *pWidth   = _aImg[i].Width;
      *pHeight  = _aImg[i].Height;
      return  _aImg[i].pData;
    }
  }

  return NULL;
}

/*********************************************************************
*
*       _GetFrameBuf()
*
*  Function description
*   Get the frame buffer and its dimensions.
*/
static char* _GetFrameBuf(int* pWidth, int* pHeight) {
  
  *pWidth = 1920;
  *pHeight = 1080;

  return (char*)0x20000000;
}

/*********************************************************************
*
*       _RenderImage()
*
*  Function description
*   Render an image to be written to the display.
*/
static void _RenderImage(void) {
  const char* pImg;
  char* pFrameBuf;
  char  Pixel;
  unsigned int Width;
  unsigned int Height;
  unsigned int x;
  unsigned int y;

  pFrameBuf = _GetFrameBuf(&Width, &Height);
  pImg = _GetImage("logo.bmp", &Width, &Height);

  for (y = 0; y < Height; y++) {
    for (x = 0; x < Width; x++) {
      Pixel = _GetPixel(pImg, x, y, Width, Height);
      *pFrameBuf = Pixel;
    }
  }
}

void obt_exercise_1(void) {
    // This results in creating an issue
    // This is a debugging exercise
  _RenderImage();
}