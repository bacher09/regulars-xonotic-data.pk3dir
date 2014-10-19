#include "anim/animhost.c"
#include "anim/animation.c"
#include "anim/easing.c"
#include "anim/keyframe.c"
#include "item.c"
#include "item/container.c"
#include "item/inputcontainer.c"
#include "item/nexposee.c"
#include "item/modalcontroller.c"
#include "item/image.c"
#include "item/label.c"
#include "item/button.c"
#include "item/checkbox.c"
#include "item/radiobutton.c"
#include "item/borderimage.c"
#include "item/slider.c"
#include "item/dialog.c"
#include "item/tab.c"
#include "item/textslider.c"
#include "item/listbox.c"
#include "item/inputbox.c"
#include "xonotic/dialog.c"
#include "xonotic/tab.c"
#include "xonotic/mainwindow.c"
#include "xonotic/button.c"
#include "xonotic/bigbutton.c"
#include "xonotic/commandbutton.c"
#include "xonotic/bigcommandbutton.c"
#include "xonotic/dialog_firstrun.c"
#include "xonotic/dialog_teamselect.c"
#include "xonotic/dialog_sandboxtools.c"
#include "xonotic/dialog_monstertools.c"
#include "xonotic/dialog_settings.c"
#include "xonotic/dialog_settings_video.c"
#include "xonotic/dialog_settings_effects.c"
#include "xonotic/dialog_settings_audio.c"
#include "xonotic/dialog_settings_user.c"
#include "xonotic/dialog_settings_user_languagewarning.c"
#include "xonotic/dialog_settings_misc.c"
#include "xonotic/dialog_multiplayer.c"
#include "xonotic/dialog_multiplayer_playersetup.c"
#include "xonotic/tabcontroller.c"
#include "xonotic/textlabel.c"
#include "xonotic/slider.c"
#include "xonotic/slider_resolution.c"
#include "xonotic/checkbox.c"
#include "xonotic/checkbox_string.c"
#include "xonotic/weaponarenacheckbox.c"
#include "xonotic/radiobutton.c"
#include "xonotic/nexposee.c"
#include "xonotic/rootdialog.c"
#include "xonotic/textslider.c"
#include "xonotic/colorbutton.c"
#include "xonotic/dialog_multiplayer_join.c"
#include "xonotic/dialog_multiplayer_join_serverinfo.c"
#include "xonotic/playerlist.c"
#include "xonotic/listbox.c"
#include "xonotic/serverlist.c"
#include "xonotic/inputbox.c"
#include "xonotic/dialog_quit.c"
#include "xonotic/dialog_multiplayer_create.c"
#include "xonotic/dialog_multiplayer_create_mutators.c"
#include "xonotic/dialog_multiplayer_create_advanced.c"
#include "xonotic/dialog_multiplayer_create_mapinfo.c"
#include "xonotic/gametypelist.c"
#include "xonotic/maplist.c"
#include "xonotic/skinlist.c"
#include "xonotic/languagelist.c"
#include "xonotic/image.c"
#include "xonotic/crosshairbutton.c"
#include "xonotic/playermodel.c"
#include "xonotic/checkbox_slider_invalid.c"
#include "xonotic/charmap.c"
#include "xonotic/keybinder.c"
#include "xonotic/dialog_settings_input.c"
#include "xonotic/dialog_settings_input_userbind.c"
#include "xonotic/slider_decibels.c"
#include "xonotic/dialog_singleplayer.c"
#include "xonotic/campaign.c"
#include "xonotic/dialog_singleplayer_winner.c"
#include "xonotic/dialog_credits.c"
#include "xonotic/credits.c"
#include "xonotic/dialog_multiplayer_playersetup_crosshair.c"
#include "xonotic/dialog_multiplayer_playersetup_hud.c"
#include "xonotic/dialog_multiplayer_playersetup_hudconfirm.c"
#include "xonotic/dialog_multiplayer_playersetup_model.c"
#include "xonotic/dialog_multiplayer_playersetup_view.c"
#include "xonotic/dialog_multiplayer_playersetup_weapons.c"
#include "xonotic/weaponslist.c"
#include "xonotic/dialog_multiplayer_demo.c"
#include "xonotic/demolist.c"
#include "xonotic/colorpicker.c"
#include "xonotic/colorpicker_string.c"
#include "xonotic/cvarlist.c"
#include "xonotic/dialog_settings_misc_cvars.c"
#include "xonotic/dialog_hudsetup_exit.c"
#include "xonotic/dialog_hudpanel_notification.c"
#include "xonotic/dialog_hudpanel_ammo.c"
#include "xonotic/dialog_hudpanel_healtharmor.c"
#include "xonotic/dialog_hudpanel_powerups.c"
#include "xonotic/dialog_hudpanel_racetimer.c"
#include "xonotic/dialog_hudpanel_pressedkeys.c"
#include "xonotic/dialog_hudpanel_radar.c"
#include "xonotic/dialog_hudpanel_score.c"
#include "xonotic/dialog_hudpanel_timer.c"
#include "xonotic/dialog_hudpanel_vote.c"
#include "xonotic/dialog_hudpanel_modicons.c"
#include "xonotic/dialog_hudpanel_chat.c"
#include "xonotic/dialog_hudpanel_engineinfo.c"
#include "xonotic/dialog_hudpanel_infomessages.c"
#include "xonotic/dialog_hudpanel_weapons.c"
#include "xonotic/dialog_hudpanel_physics.c"
#include "xonotic/dialog_hudpanel_centerprint.c"
#include "xonotic/slider_picmip.c"
