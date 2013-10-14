#ifdef INTERFACE
CLASS(XonoticGameSettingsTab) EXTENDS(XonoticTab)
	METHOD(XonoticGameSettingsTab, fill, void(entity))
	ATTRIB(XonoticGameSettingsTab, title, string, _("Game"))
	ATTRIB(XonoticGameSettingsTab, intendedWidth, float, 0.9)
	ATTRIB(XonoticGameSettingsTab, rows, float, 17)
	ATTRIB(XonoticGameSettingsTab, columns, float, 6.5)
ENDCLASS(XonoticGameSettingsTab)
entity makeXonoticGameSettingsTab();
#endif

#ifdef IMPLEMENTATION
entity makeXonoticGameSettingsTab()
{
	entity me;
	me = spawnXonoticGameSettingsTab();
	me.configureDialog(me);
	return me;
}

void XonoticGameSettingsTab_fill(entity me)
{
	entity mc;
	mc = makeXonoticTabController(me.rows - 3);
	
	me.gotoRC(me, 0.5, 0.25);
		//me.TD(me, 1, 1, mc.makeTabButton(mc, _("General"),      makeXonoticGameCrosshairSettingsTab()));
		me.TD(me, 1, 1, mc.makeTabButton(mc, _("View"),           makeXonoticGameCrosshairSettingsTab()));
		me.TD(me, 1, 1, mc.makeTabButton(mc, _("Crosshair"),      makeXonoticGameCrosshairSettingsTab()));
		me.TD(me, 1, 1, mc.makeTabButton(mc, _("HUD"),            makeXonoticGameCrosshairSettingsTab()));
		me.TD(me, 1, 1, mc.makeTabButton(mc, _("Messages"),       makeXonoticGameCrosshairSettingsTab()));
		me.TD(me, 1, 1, mc.makeTabButton(mc, _("Weapons"),        makeXonoticGameCrosshairSettingsTab()));
		me.TD(me, 1, 1, mc.makeTabButton(mc, _("Playermodels"),   makeXonoticGameCrosshairSettingsTab()));

	me.gotoRC(me, 3, 0);
		me.TD(me, me.rows - 3, me.columns, mc);
		
	/*

		//me.TD(me, 1, 2, mc.makeTabButton(mc, _("View"),       makeXonoticGameViewSettingsTab()));
		//me.TD(me, 1, 2, mc.makeTabButton(mc, _("General"),    makeXonoticGameGeneralSettingsTab()));
		me.TD(me, 1, 2, mc.makeTabButton(mc, _("Crosshair"),  makeXonoticGameCrosshairSettingsTab()));
	me.TR(me);
		//me.TD(me, 1, 1.5, mc.makeTabButton(mc, _("Weapon"),        makeXonoticGameWeaponSettingsTab()));
		//me.TD(me, 1, 1.5, mc.makeTabButton(mc, _("Playermodel"),   makeXonoticGamePlayermodelSettingsTab()));
		//me.TD(me, 1, 1.5, mc.makeTabButton(mc, _("HUD"),           makeXonoticGameHUDSettingsTab()));
		//me.TD(me, 1, 1.5, mc.makeTabButton(mc, _("Notification"),  makeXonoticGameNotificationSettingsTab()));


	me.TR(me);
		me.TD(me, 1, 3, e = makeXonoticCheckBox(0, "cl_gentle", _("Disable gore effects and harsh language"))); // also set sv_gentle
		
	me.gotoRC(me, 2, 3); me.setFirstColumn(me, me.currentColumn);
		me.TDempty(me, 0.5);
		me.TD(me, 1, 2, e = makeXonoticButton(_("Crosshair"), '0 0 0'));
			e.onClick = DialogOpenButton_Click;
			e.onClickEntity = main.crosshairDialog;
		setDependent(e, "crosshair_enabled", 1, 2);
		// TODO: show status of crosshair dot and hittest and pickups and such here with text
	me.TR(me);
		me.TDempty(me, 0.5);
		me.TD(me, 1, 2, e = makeXonoticButton(_("HUD"), '0 0 0'));
			e.onClick = DialogOpenButton_Click;
			e.onClickEntity = main.hudDialog;
		// TODO: show hud config name with text here 
	me.TR(me);
		me.TDempty(me, 0.5);
		me.TD(me, 1, 2, e = makeXonoticButton(_("Notification"), '0 0 0'));
			e.onClick = DialogOpenButton_Click;
			e.onClickEntity = main.notificationDialog;
		// TODO: Show all the notification stuff here
	me.TR(me);
		me.TDempty(me, 0.5);
		me.TD(me, 1, 2, e = makeXonoticButton(_("Playermodel"), '0 0 0'));
			e.onClick = DialogOpenButton_Click;
			e.onClickEntity = main.modelDialog;
		// TODO: show csqc model settings like forcemyplayer and deglowing/ghosting bodies with text here
	me.TR(me);
		me.TDempty(me, 0.5);
		me.TD(me, 1, 2, e = makeXonoticButton(_("View"), '0 0 0'));
			e.onClick = DialogOpenButton_Click;
			e.onClickEntity = main.viewDialog;
		// TODO: show fov and other settings with text here
	me.TR(me);
		me.TDempty(me, 0.5);
		me.TD(me, 1, 2, e = makeXonoticButton(_("Weapon"), '0 0 0'));
			e.onClick = DialogOpenButton_Click;
			e.onClickEntity = main.weaponsDialog;
		// I don't really think this is useful as is, and especially it doesn't look very clean...
		// In the future, if ALL of these buttons had some information, then it would be justified/clean
		//me.TD(me, 1, 1, e0 = makeXonoticTextLabel(0, string_null)); 
		//	e0.textEntity = main.weaponsDialog;
		//	e0.allowCut = 1;

	//me.gotoRC(me, me.rows - 1, 0);
	//	me.TD(me, 1, me.columns, makeXonoticCommandButton(_("Apply immediately"), '0 0 0', "color -1 -1;name \"$_cl_name\";sendcvar cl_weaponpriority;sendcvar cl_autoswitch;sendcvar cl_forceplayermodels;sendcvar cl_forceplayermodelsfromxonotic;playermodel $_cl_playermodel;playerskin $_cl_playerskin", COMMANDBUTTON_APPLY));
*/


	me.gotoRC(me, me.rows - 1, 0);
		me.TD(me, 1, me.columns, makeXonoticCommandButton(_("Apply immediately"), '0 0 0', "sendcvar cl_gentle; sendcvar cl_allow_uidtracking; sendcvar cl_allow_uid2name;", COMMANDBUTTON_APPLY));
}
#endif
