/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1114", /* black   */
  [1] = "#181b1e", /* red     */
  [2] = "#292c31", /* green   */
  [3] = "#3f454b", /* yellow  */
  [4] = "#5c636d", /* blue    */
  [5] = "#7e8895", /* magenta */
  [6] = "#aab3bf", /* cyan    */
  [7] = "#e0e3e7", /* white   */

  /* 8 bright colors */
  [8]  = "#f7a8b8", /* black   */
  [9]  = "#f7a8b8", /* red     */
  [10] = "#f7a8b8", /* green   */
  [11] = "#55cdfc", /* yellow  */
  [12] = "#55cdfc", /* blue    */
  [13] = "#61aa64", /* magenta */
  [14] = "#f7a8b8", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#08090b", /* background */
  [257] = "#dedede", /* foreground */
  [258] = "#212121", /* inverted foreground */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 257;
static unsigned int defaultrcs = 258;

/*
 * Colors used, when the specific fg == defaultfg. So in reverse mode this
 * will reverse too. Another logic would only make the simple feature too
 * complex.
 */
static unsigned int defaultitalic = 7;
static unsigned int defaultunderline = 7;
