#ifndef config_h_INCLUDED
#define config_h_INCLUDED

#define DEFAULT_FONT "Sans 14"
#define DEFAULT_ROUNDING 5
/* Shift+space is left alone on purpose: it is the hangul toggle of most korean
 * input method setups (fcitx5's TriggerKeys), and the ansi layout has
 * a real Tab key anyway. Define this to get the old shift+space = tab shortcut
 * back. */
/* #define SHIFT_SPACE_IS_TAB */
static const int transparency = 255;

struct clr_scheme schemes[] = {
{
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {45, 45, 45, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text = {.color = UINT32_MAX},
  .text_press = {.color = UINT32_MAX},
  .text_swipe = {.color = UINT32_MAX},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
},
{
  /* colors */
  .bg = {.bgra = {15, 15, 15, transparency}},
  .fg = {.bgra = {32, 32, 32, transparency}},
  .high = {.bgra = {100, 100, 100, transparency}},
  .swipe = {.bgra = {100, 255, 100, 64}},
  .text_press = {.color = UINT32_MAX},
  .text_swipe = {.color = UINT32_MAX},
  .text = {.color = UINT32_MAX},
  .font = DEFAULT_FONT,
  .rounding = DEFAULT_ROUNDING,
}
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id layers[] = {
  Ansi, // First layout is the default layout on startup
  Special,
  Full, // keeps the mobile layouts (and the Cmp/index key) reachable
  NumLayouts // signals the last item, may not be omitted
};

/* layers is an ordered list of layouts, used to cycle through */
static enum layout_id landscape_layers[] = {
  Ansi, // First layout is the default layout on startup
  LandscapeSpecial,
  Landscape, // keeps the mobile layouts (and the Cmp/index key) reachable
  NumLayouts // signals the last item, may not be omitted
};

#endif // config_h_INCLUDED
