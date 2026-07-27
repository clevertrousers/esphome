// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace time;
using namespace text_sensor;
using namespace light;
using namespace climate;
using namespace switch_;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
homeassistant::HomeassistantTime *homeassistant_time;
version::VersionTextSensor *version_versiontextsensor;
wifi_info::IPAddressWiFiInfo *wifi_info_ipaddresswifiinfo;
wifi_info::SSIDWiFiInfo *wifi_info_ssidwifiinfo;
wifi_info::BSSIDWiFiInfo *wifi_info_bssidwifiinfo;
status_led::StatusLEDLightOutput *status_led_statusledlightoutput;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
light::LightState *light_lightstate;
uptime::UptimeSensor *uptime_uptimesensor;
wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor;
MitsubishiHeatPump *mitsubishiheatpump;
restart::RestartSwitch *restart_restartswitch;
mdns::MDNSComponent *mdns_mdnscomponent;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   board: d1_mini
  //   framework:
  //     version: 2.7.4
  //     source: ~3.20704.0
  //     platform_version: 2.6.3
  //   restore_from_flash: false
  //   board_flash_mode: dout
  esphome::esp8266::setup_preferences();
  // async_tcp:
  //   {}
  // esphome:
  //   name: ac-masterbed
  //   build_path: ac-masterbed
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("ac-masterbed", __DATE__ ", " __TIME__, false);
  // time:
  // text_sensor:
  // light:
  // climate:
  // switch:
  // logger:
  //   baud_rate: 0
  //   id: logger_logger
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(0, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  web_server_base_webserverbase->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  captive_portal_captiveportal->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: Master Bed A/C Fallback Hotspot
  //     password: 4BOwMfONSnHG
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   networks:
  //   - ssid: As you wish
  //     password: '6037424348'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: ac-masterbed.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("ac-masterbed.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("As you wish");
  wifi_wifiap_2.set_password("6037424348");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Master Bed A/C Fallback Hotspot");
  wifi_wifiap.set_password("4BOwMfONSnHG");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: 31270abe09eca12950e72f2f805d9153
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("31270abe09eca12950e72f2f805d9153");
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // sensor:
  // substitutions:
  //   name: ac-masterbed
  //   friendly_name: Master Bed A/C
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // time.homeassistant:
  //   platform: homeassistant
  //   id: homeassistant_time
  //   update_interval: 60min
  //   timezone: EST5EDT,M3.2.0,M11.1.0
  homeassistant_time = new homeassistant::HomeassistantTime();
  homeassistant_time->set_timezone("EST5EDT,M3.2.0,M11.1.0");
  homeassistant_time->set_update_interval(3600000);
  homeassistant_time->set_component_source("homeassistant.time");
  App.register_component(homeassistant_time);
  // text_sensor.version:
  //   platform: version
  //   name: ac-masterbed ESPHome Version
  //   disabled_by_default: false
  //   id: version_versiontextsensor
  //   icon: mdi:new-box
  //   hide_timestamp: false
  version_versiontextsensor = new version::VersionTextSensor();
  App.register_text_sensor(version_versiontextsensor);
  version_versiontextsensor->set_name("ac-masterbed ESPHome Version");
  version_versiontextsensor->set_disabled_by_default(false);
  version_versiontextsensor->set_icon("mdi:new-box");
  version_versiontextsensor->set_component_source("version.text_sensor");
  App.register_component(version_versiontextsensor);
  version_versiontextsensor->set_hide_timestamp(false);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: ac-masterbed IP
  //     disabled_by_default: false
  //     id: wifi_info_ipaddresswifiinfo
  //   ssid:
  //     name: ac-masterbed SSID
  //     disabled_by_default: false
  //     id: wifi_info_ssidwifiinfo
  //   bssid:
  //     name: ac-masterbed BSSID
  //     disabled_by_default: false
  //     id: wifi_info_bssidwifiinfo
  wifi_info_ipaddresswifiinfo = new wifi_info::IPAddressWiFiInfo();
  wifi_info_ipaddresswifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ipaddresswifiinfo);
  App.register_text_sensor(wifi_info_ipaddresswifiinfo);
  wifi_info_ipaddresswifiinfo->set_name("ac-masterbed IP");
  wifi_info_ipaddresswifiinfo->set_disabled_by_default(false);
  wifi_info_ssidwifiinfo = new wifi_info::SSIDWiFiInfo();
  wifi_info_ssidwifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ssidwifiinfo);
  App.register_text_sensor(wifi_info_ssidwifiinfo);
  wifi_info_ssidwifiinfo->set_name("ac-masterbed SSID");
  wifi_info_ssidwifiinfo->set_disabled_by_default(false);
  wifi_info_bssidwifiinfo = new wifi_info::BSSIDWiFiInfo();
  wifi_info_bssidwifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_bssidwifiinfo);
  App.register_text_sensor(wifi_info_bssidwifiinfo);
  wifi_info_bssidwifiinfo->set_name("ac-masterbed BSSID");
  wifi_info_bssidwifiinfo->set_disabled_by_default(false);
  // light.status_led:
  //   platform: status_led
  //   name: Switch state
  //   pin:
  //     number: 2
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin
  //   disabled_by_default: false
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   output_id: status_led_statusledlightoutput
  status_led_statusledlightoutput = new status_led::StatusLEDLightOutput();
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(2);
  esphome_esp8266_esp8266gpiopin->set_inverted(false);
  esphome_esp8266_esp8266gpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  status_led_statusledlightoutput->set_pin(esphome_esp8266_esp8266gpiopin);
  status_led_statusledlightoutput->set_component_source("status_led.light");
  App.register_component(status_led_statusledlightoutput);
  light_lightstate = new light::LightState(status_led_statusledlightoutput);
  App.register_light(light_lightstate);
  light_lightstate->set_component_source("light");
  App.register_component(light_lightstate);
  light_lightstate->set_name("Switch state");
  light_lightstate->set_disabled_by_default(false);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->add_effects({});
  // sensor.uptime:
  //   platform: uptime
  //   name: ac-masterbed Uptime
  //   update_interval: 5min
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   state_class: total_increasing
  //   id: uptime_uptimesensor
  uptime_uptimesensor = new uptime::UptimeSensor();
  uptime_uptimesensor->set_update_interval(300000);
  uptime_uptimesensor->set_component_source("uptime.sensor");
  App.register_component(uptime_uptimesensor);
  App.register_sensor(uptime_uptimesensor);
  uptime_uptimesensor->set_name("ac-masterbed Uptime");
  uptime_uptimesensor->set_disabled_by_default(false);
  uptime_uptimesensor->set_icon("mdi:timer-outline");
  uptime_uptimesensor->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_uptimesensor->set_unit_of_measurement("s");
  uptime_uptimesensor->set_accuracy_decimals(0);
  uptime_uptimesensor->set_force_update(false);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: ac-masterbed WiFi Signal
  //   update_interval: 5min
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  //   id: wifi_signal_wifisignalsensor
  wifi_signal_wifisignalsensor = new wifi_signal::WiFiSignalSensor();
  wifi_signal_wifisignalsensor->set_update_interval(300000);
  wifi_signal_wifisignalsensor->set_component_source("wifi_signal.sensor");
  App.register_component(wifi_signal_wifisignalsensor);
  App.register_sensor(wifi_signal_wifisignalsensor);
  wifi_signal_wifisignalsensor->set_name("ac-masterbed WiFi Signal");
  wifi_signal_wifisignalsensor->set_disabled_by_default(false);
  wifi_signal_wifisignalsensor->set_device_class("signal_strength");
  wifi_signal_wifisignalsensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor->set_unit_of_measurement("dBm");
  wifi_signal_wifisignalsensor->set_accuracy_decimals(0);
  wifi_signal_wifisignalsensor->set_force_update(false);
  // external_components:
  //   - source:
  //       url: https:github.com/geoffdavis/esphome-mitsubishiheatpump.git
  //       type: git
  //     refresh: 1d
  //     components: all
  // climate.mitsubishi_heatpump:
  //   platform: mitsubishi_heatpump
  //   name: Master Bed A/C
  //   disabled_by_default: false
  //   visual: {}
  //   id: mitsubishiheatpump
  //   hardware_uart: UART0
  //   update_interval: 500ms
  //   supports:
  //     mode:
  //     - HEAT_COOL
  //     - COOL
  //     - HEAT
  //     - DRY
  //     - FAN_ONLY
  //     fan_mode:
  //     - AUTO
  //     - DIFFUSE
  //     - LOW
  //     - MEDIUM
  //     - MIDDLE
  //     - HIGH
  //     swing_mode:
  //     - 'OFF'
  //     - VERTICAL
  mitsubishiheatpump = new MitsubishiHeatPump(&Serial);
  mitsubishiheatpump->config_traits().add_supported_mode(climate::CLIMATE_MODE_HEAT_COOL);
  mitsubishiheatpump->config_traits().add_supported_mode(climate::CLIMATE_MODE_COOL);
  mitsubishiheatpump->config_traits().add_supported_mode(climate::CLIMATE_MODE_HEAT);
  mitsubishiheatpump->config_traits().add_supported_mode(climate::CLIMATE_MODE_DRY);
  mitsubishiheatpump->config_traits().add_supported_mode(climate::CLIMATE_MODE_FAN_ONLY);
  mitsubishiheatpump->config_traits().add_supported_fan_mode(climate::CLIMATE_FAN_AUTO);
  mitsubishiheatpump->config_traits().add_supported_fan_mode(climate::CLIMATE_FAN_DIFFUSE);
  mitsubishiheatpump->config_traits().add_supported_fan_mode(climate::CLIMATE_FAN_LOW);
  mitsubishiheatpump->config_traits().add_supported_fan_mode(climate::CLIMATE_FAN_MEDIUM);
  mitsubishiheatpump->config_traits().add_supported_fan_mode(climate::CLIMATE_FAN_MIDDLE);
  mitsubishiheatpump->config_traits().add_supported_fan_mode(climate::CLIMATE_FAN_HIGH);
  mitsubishiheatpump->config_traits().add_supported_swing_mode(climate::CLIMATE_SWING_OFF);
  mitsubishiheatpump->config_traits().add_supported_swing_mode(climate::CLIMATE_SWING_VERTICAL);
  mitsubishiheatpump->set_update_interval(500);
  mitsubishiheatpump->set_component_source("esphome.coroutine");
  App.register_component(mitsubishiheatpump);
  App.register_climate(mitsubishiheatpump);
  mitsubishiheatpump->set_name("Master Bed A/C");
  mitsubishiheatpump->set_disabled_by_default(false);
  // switch.restart:
  //   platform: restart
  //   name: Master Bed A/C Restart
  //   disabled_by_default: false
  //   id: restart_restartswitch
  //   icon: mdi:restart
  restart_restartswitch = new restart::RestartSwitch();
  restart_restartswitch->set_component_source("restart.switch");
  App.register_component(restart_restartswitch);
  App.register_switch(restart_restartswitch);
  restart_restartswitch->set_name("Master Bed A/C Restart");
  restart_restartswitch->set_disabled_by_default(false);
  restart_restartswitch->set_icon("mdi:restart");
  // socket:
  //   implementation: lwip_tcp
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
