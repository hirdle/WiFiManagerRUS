/**
 * wm_strings_ru.h
 * русские строки для
 * WiFiManager, библиотека для ESP8266/Arduino
 * для конфигурации WiFi через Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_RU_H_
#define _WM_STRINGS_RU_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "ru-RU"; // i18n lang code

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='ru'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>";

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Настроить WiFi</button></form><br/>\n",
"<form action='/0wifi'   method='get'><button>Настроить WiFi (без сканирования)</button></form><br/>\n",
"<form action='/info'    method='get'><button>Информация</button></form><br/>\n",
"<form action='/param'   method='get'><button>Настройки</button></form><br/>\n",
"<form action='/close'   method='get'><button>Закрыть</button></form><br/>\n",
"<form action='/restart' method='get'><button>Перезагрузить</button></form><br/>\n",
"<form action='/exit'    method='get'><button>Выйти</button></form><br/>\n",
"<form action='/erase'   method='get'><button class='D'>Стереть</button></form><br/>\n",
"<form action='/update'  method='get'><button>Обновить</button></form><br/>\n",
"<hr><br/>"
};

const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>";
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>";
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>";

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Пароль</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' id='showpass' onclick='f()'> <label for='showpass'>Показать пароль</label><br/>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Сохранить</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Обновить</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Сохранение данных WiFi<br/>Попытка подключения ESP к сети.<br />Если не удастся — переподключитесь к AP и попробуйте снова</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Сохранено<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Стереть WiFi конфигурацию</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Обновить</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Назад</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Подключено</strong> к {v}<br/><em><small>IP: {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Не подключено</strong> к {v}{r}</div>";
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Ошибка аутентификации";
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>Точка доступа не найдена";
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Не удалось подключиться";
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Сеть не настроена</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,...');}" // оставляем PNG без изменений
"</style>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Да";
const char S_n[]                  PROGMEM = "Нет";
const char S_enable[]             PROGMEM = "Включено";
const char S_disable[]            PROGMEM = "Выключено";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Неизвестно";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Данные сохранены";
const char S_titlewifisettings[]  PROGMEM = "Настройки сохранены";
const char S_titlewifi[]          PROGMEM = "Настройка ESP";
const char S_titleinfo[]          PROGMEM = "Информация";
const char S_titleparam[]         PROGMEM = "Настройки";
const char S_titleparamsaved[]    PROGMEM = "Настройки сохранены";
const char S_titleexit[]          PROGMEM = "Выход";
const char S_titlereset[]         PROGMEM = "Сброс";
const char S_titleerase[]         PROGMEM = "Стереть";
const char S_titleclose[]         PROGMEM = "Закрыть";
const char S_options[]            PROGMEM = "опции";
const char S_nonetworks[]         PROGMEM = "Сети не найдены. Обновите для повторного сканирования.";
const char S_staticip[]           PROGMEM = "Статический IP";
const char S_staticgw[]           PROGMEM = "Статический шлюз";
const char S_staticdns[]          PROGMEM = "Статический DNS";
const char S_subnet[]             PROGMEM = "Маска сети";
const char S_exiting[]            PROGMEM = "Выход";
const char S_resetting[]          PROGMEM = "Модуль перезагрузится через несколько секунд.";
const char S_closing[]            PROGMEM = "Вы можете закрыть страницу, портал продолжит работать";
const char S_error[]              PROGMEM = "Произошла ошибка";
const char S_notfound[]           PROGMEM = "Файл не найден\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nМетод: ";
const char S_args[]               PROGMEM = "\nАргументы: ";
const char S_parampre[]           PROGMEM = "param_";
const char D_HR[]                 PROGMEM = "--------------------";

#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

#endif
#endif
