const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#090713", /* black   */
  [1] = "#d9274b", /* red     */
  [2] = "#5f22c3", /* green   */
  [3] = "#c42ad9", /* yellow  */
  [4] = "#cb31da", /* blue    */
  [5] = "#5adde2", /* magenta */
  [6] = "#cd59e1", /* cyan    */
  [7] = "#e8c7e7", /* white   */

  /* 8 bright colors */
  [8]  = "#a28ba1",  /* black   */
  [9]  = "#d9274b",  /* red     */
  [10] = "#5f22c3", /* green   */
  [11] = "#c42ad9", /* yellow  */
  [12] = "#cb31da", /* blue    */
  [13] = "#5adde2", /* magenta */
  [14] = "#cd59e1", /* cyan    */
  [15] = "#e8c7e7", /* white   */

  /* special colors */
  [256] = "#090713", /* background */
  [257] = "#e8c7e7", /* foreground */
  [258] = "#e8c7e7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
