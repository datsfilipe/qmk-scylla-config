# Scylla QMK Config

Personal QMK keymap for the Bastard Keyboards Scylla. Forked from [Bastardkb/qmk_userspace](https://github.com/Bastardkb/qmk_userspace).

## Layout

Based on [Miryoku](https://github.com/manna-harbour/miryoku) with the following modifications:

![Keymap](https://github.com/datsfilipe/zmk-config-corne/raw/main/keymap-drawer/corne.svg)

- **QWERTY** base layer instead of Colemak-DH
- **Vim-style navigation** (hjkl = left/down/up/right) on NAV layer
- **Programmer-friendly symbols** on right side of SYM layer
- **Thumb rows**: Esc/MEDIA, Space/SYM, Tab/FUN | Del/NUM, Enter/NAV, Bksp
- **LALT on both sides** (no AltGr on base layer to avoid accented characters)

## Build

Firmware is built automatically via GitHub Actions. Download the `.uf2` from releases.
