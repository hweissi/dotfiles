static const char norm_fg[] = "#e8c7e7";
static const char norm_bg[] = "#090713";
static const char norm_border[] = "#a28ba1";

static const char sel_fg[] = "#e8c7e7";
static const char sel_bg[] = "#5f22c3";
static const char sel_border[] = "#e8c7e7";

static const char urg_fg[] = "#e8c7e7";
static const char urg_bg[] = "#d9274b";
static const char urg_border[] = "#d9274b";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
