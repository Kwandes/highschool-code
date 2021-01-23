var ok = 1;
if ((( navigator.appName== "Netscape") && (parseInt(navigator.appVersion) < 3 )) ||
    ((navigator.appName == "Microsoft Internet Explorer") && (parseInt(navigator.appVersion) < 3 )))
 ok = 0;

if (ok == 1) {
   firma = new Image(140,30);    firma.src = "grafika/menu/menu_firma.gif";
   firma_on = new Image(130,30); firma_on.src = "grafika/menu/menu_firma_on.gif";

   kursy = new Image(140,30);    kursy.src = "grafika/menu/menu_kursy.gif";
   kursy_on = new Image(130,30); kursy_on.src = "grafika/menu/menu_kursy_on.gif";

   podrecznik = new Image(130,30);     podrecznik.src = "grafika/menu/menu_podrecznik.gif";
   podrecznik_on = new Image(130,30);  podrecznik_on.src = "grafika/menu/menu_podrecznik_on.gif";

   czarter = new Image(130,30);     czarter.src = "grafika/menu/menu_czarter.gif";
   czarter_on = new Image(130,30);  czarter_on.src = "grafika/menu/menu_czarter_on.gif";

   rejsy = new Image(140,30);    rejsy.src = "grafika/menu/menu_rejsy.gif";
   rejsy_on = new Image(130,30); rejsy_on.src = "grafika/menu/menu_rejsy_on.gif";

   szkolka = new Image(140,30);    szkolka.src = "grafika/menu/menu_szkolka.gif";
   szkolka_on = new Image(130,30); szkolka_on.src = "grafika/menu/menu_szkolka_on.gif";

   sm = new Image(340,20);     sm.src = "grafika/menu/menu_sm.gif";
   sm_on = new Image(340,20);  sm_on.src = "grafika/menu/menu_sm_on.gif";

   galeria = new Image(130,30);     galeria.src = "grafika/menu/menu_galeria.gif";
   galeria_on = new Image(130,30);  galeria_on.src = "grafika/menu/menu_galeria_on.gif";

   wws = new Image(340,20);     wws.src = "grafika/menu/menu_wws.gif";
   wws_on = new Image(340,20);  wws_on.src = "grafika/menu/menu_wws_on.gif";

   galeria = new Image(340,20);     galeria.src = "grafika/menu/menu_galeria.gif";
   galeria_on = new Image(340,20);  galeria_on.src = "grafika/menu/menu_galeria_on.gif";

   kzsj = new Image(340,20);     kzsj.src = "grafika/menu/menu_kzsj.gif";
   kzsj_on = new Image(340,20);  kzsj_on.src = "grafika/menu/menu_kzsj_on.gif";

   ki = new Image(340,20);     ki.src = "grafika/menu/menu_ki.gif";
   ki_on = new Image(340,20);  ki_on.src = "grafika/menu/menu_ki_on.gif";

   zp = new Image(340,20);     zp.src = "grafika/menu/menu_zp.gif";
   zp_on = new Image(340,20);  zp_on.src = "grafika/menu/menu_zp_on.gif";

}  

function on(nazwa) {
 if (ok == 1) {
  document.images[nazwa].src = eval (nazwa + "_on.src");
 }
  return true;
}

function off(nazwa) {
if (ok == 1) {
  document.images[nazwa].src = eval (nazwa + ".src");
 }
  return true;
}