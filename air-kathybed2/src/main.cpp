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
using namespace uart;
uart::ESP8266UartComponent *uart_esp8266uartcomponent;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
dallas::ESPOneWire *dallas_esponewire;
dallas::DallasComponent *dallas_dallascomponent;
uptime::UptimeSensor *uptime_uptimesensor;
wifi_signal::WiFiSignalSensor *airkathy2wifi;
pm1006::PM1006Component *pm1006_pm1006component;
sensor::Sensor *sensor_sensor;
dallas::DallasTemperatureSensor *dallas_dallastemperaturesensor;
sensor::CalibrateLinearFilter *sensor_calibratelinearfilter;
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
  //   name: air-kathybed2
  //   build_path: air-kathybed2
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("air-kathybed2", __DATE__ ", " __TIME__, false);
  // time:
  // text_sensor:
  // light:
  // switch:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
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
  //     ssid: Air Quality Kathy Bedroom
  //     password: PtDGHwj5zRa6
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
  //   use_address: air-kathybed2.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("air-kathybed2.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("As you wish");
  wifi_wifiap_2.set_password("6037424348");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Air Quality Kathy Bedroom");
  wifi_wifiap.set_password("PtDGHwj5zRa6");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: e578d77672fbd9ea5925c274c938d20b
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("e578d77672fbd9ea5925c274c938d20b");
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
  //   name: air-kathybed2
  //   friendly_name: Air Quality Kathy Bedroom
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
  //   name: air-kathybed2 ESPHome Version
  //   disabled_by_default: false
  //   id: version_versiontextsensor
  //   icon: mdi:new-box
  //   hide_timestamp: false
  version_versiontextsensor = new version::VersionTextSensor();
  App.register_text_sensor(version_versiontextsensor);
  version_versiontextsensor->set_name("air-kathybed2 ESPHome Version");
  version_versiontextsensor->set_disabled_by_default(false);
  version_versiontextsensor->set_icon("mdi:new-box");
  version_versiontextsensor->set_component_source("version.text_sensor");
  App.register_component(version_versiontextsensor);
  version_versiontextsensor->set_hide_timestamp(false);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: air-kathybed2 IP
  //     disabled_by_default: false
  //     id: wifi_info_ipaddresswifiinfo
  //   ssid:
  //     name: air-kathybed2 SSID
  //     disabled_by_default: false
  //     id: wifi_info_ssidwifiinfo
  //   bssid:
  //     name: air-kathybed2 BSSID
  //     disabled_by_default: false
  //     id: wifi_info_bssidwifiinfo
  wifi_info_ipaddresswifiinfo = new wifi_info::IPAddressWiFiInfo();
  wifi_info_ipaddresswifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ipaddresswifiinfo);
  App.register_text_sensor(wifi_info_ipaddresswifiinfo);
  wifi_info_ipaddresswifiinfo->set_name("air-kathybed2 IP");
  wifi_info_ipaddresswifiinfo->set_disabled_by_default(false);
  wifi_info_ssidwifiinfo = new wifi_info::SSIDWiFiInfo();
  wifi_info_ssidwifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ssidwifiinfo);
  App.register_text_sensor(wifi_info_ssidwifiinfo);
  wifi_info_ssidwifiinfo->set_name("air-kathybed2 SSID");
  wifi_info_ssidwifiinfo->set_disabled_by_default(false);
  wifi_info_bssidwifiinfo = new wifi_info::BSSIDWiFiInfo();
  wifi_info_bssidwifiinfo->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_bssidwifiinfo);
  App.register_text_sensor(wifi_info_bssidwifiinfo);
  wifi_info_bssidwifiinfo->set_name("air-kathybed2 BSSID");
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
  //     id: esphome_esp8266_esp8266gpiopin
  //     inverted: false
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
  // uart:
  //   rx_pin:
  //     number: 4
  //     mode:
  //       input: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_2
  //     inverted: false
  //   baud_rate: 9600
  //   id: uart_esp8266uartcomponent
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_esp8266uartcomponent = new uart::ESP8266UartComponent();
  uart_esp8266uartcomponent->set_component_source("uart");
  App.register_component(uart_esp8266uartcomponent);
  uart_esp8266uartcomponent->set_baud_rate(9600);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(4);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_INPUT);
  uart_esp8266uartcomponent->set_rx_pin(esphome_esp8266_esp8266gpiopin_2);
  uart_esp8266uartcomponent->set_rx_buffer_size(256);
  uart_esp8266uartcomponent->set_stop_bits(1);
  uart_esp8266uartcomponent->set_data_bits(8);
  uart_esp8266uartcomponent->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // dallas:
  //   pin:
  //     number: 0
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_3
  //     inverted: false
  //   update_interval: 30s
  //   id: dallas_dallascomponent
  //   one_wire_id: dallas_esponewire
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(0);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  dallas_esponewire = new dallas::ESPOneWire(esphome_esp8266_esp8266gpiopin_3);
  dallas_dallascomponent = new dallas::DallasComponent(dallas_esponewire);
  dallas_dallascomponent->set_update_interval(30000);
  dallas_dallascomponent->set_component_source("dallas");
  App.register_component(dallas_dallascomponent);
  // sensor.uptime:
  //   platform: uptime
  //   name: air-kathybed2 Uptime
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
  uptime_uptimesensor->set_name("air-kathybed2 Uptime");
  uptime_uptimesensor->set_disabled_by_default(false);
  uptime_uptimesensor->set_icon("mdi:timer-outline");
  uptime_uptimesensor->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_uptimesensor->set_unit_of_measurement("s");
  uptime_uptimesensor->set_accuracy_decimals(0);
  uptime_uptimesensor->set_force_update(false);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: air-kathybed2 WiFi Signal
  //   update_interval: 5min
  //   id: airkathy2wifi
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  airkathy2wifi = new wifi_signal::WiFiSignalSensor();
  airkathy2wifi->set_update_interval(300000);
  airkathy2wifi->set_component_source("wifi_signal.sensor");
  App.register_component(airkathy2wifi);
  App.register_sensor(airkathy2wifi);
  airkathy2wifi->set_name("air-kathybed2 WiFi Signal");
  airkathy2wifi->set_disabled_by_default(false);
  airkathy2wifi->set_device_class("signal_strength");
  airkathy2wifi->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  airkathy2wifi->set_unit_of_measurement("dBm");
  airkathy2wifi->set_accuracy_decimals(0);
  airkathy2wifi->set_force_update(false);
  // sensor.pm1006:
  //   platform: pm1006
  //   pm_2_5:
  //     name: air-kathybed2 2.5µm
  //     disabled_by_default: false
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: µg/m³
  //     icon: mdi:blur
  //     accuracy_decimals: 0
  //     device_class: pm25
  //     state_class: measurement
  //   id: pm1006_pm1006component
  //   uart_id: uart_esp8266uartcomponent
  //   update_interval: 4294967295
  pm1006_pm1006component = new pm1006::PM1006Component();
  pm1006_pm1006component->set_update_interval(4294967295UL);
  pm1006_pm1006component->set_component_source("pm1006.sensor");
  App.register_component(pm1006_pm1006component);
  pm1006_pm1006component->set_uart_parent(uart_esp8266uartcomponent);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("air-kathybed2 2.5\302\265m");
  sensor_sensor->set_disabled_by_default(false);
  sensor_sensor->set_icon("mdi:blur");
  sensor_sensor->set_device_class("pm25");
  sensor_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor->set_unit_of_measurement("\302\265g/m\302\263");
  sensor_sensor->set_accuracy_decimals(0);
  sensor_sensor->set_force_update(false);
  pm1006_pm1006component->set_pm_2_5_sensor(sensor_sensor);
  // sensor.dallas:
  //   platform: dallas
  //   address: 0xE93C01D607793E28
  //   name: air-kathybed2 Temperature
  //   filters:
  //   - calibrate_linear:
  //     - from: 25.11
  //       to: 21.83
  //     - from: 22.78
  //       to: 19.72
  //     - from: 20.89
  //       to: 17.89
  //     - from: 18.78
  //       to: 15.94
  //     type_id: sensor_calibratelinearfilter
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  //   id: dallas_dallastemperaturesensor
  //   dallas_id: dallas_dallascomponent
  //   resolution: 12
  dallas_dallastemperaturesensor = new dallas::DallasTemperatureSensor();
  dallas_dallastemperaturesensor->set_address(0xE93C01D607793E28);
  dallas_dallastemperaturesensor->set_resolution(12);
  dallas_dallastemperaturesensor->set_parent(dallas_dallascomponent);
  dallas_dallascomponent->register_sensor(dallas_dallastemperaturesensor);
  App.register_sensor(dallas_dallastemperaturesensor);
  dallas_dallastemperaturesensor->set_name("air-kathybed2 Temperature");
  dallas_dallastemperaturesensor->set_disabled_by_default(false);
  dallas_dallastemperaturesensor->set_device_class("temperature");
  dallas_dallastemperaturesensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  dallas_dallastemperaturesensor->set_unit_of_measurement("\302\260C");
  dallas_dallastemperaturesensor->set_accuracy_decimals(1);
  dallas_dallastemperaturesensor->set_force_update(false);
  sensor_calibratelinearfilter = new sensor::CalibrateLinearFilter(0.93346646757601f, -1.5885809752388624f);
  dallas_dallastemperaturesensor->set_filters({sensor_calibratelinearfilter});
  // switch.restart:
  //   platform: restart
  //   name: Air Quality Kathy Bedroom Restart
  //   disabled_by_default: false
  //   id: restart_restartswitch
  //   icon: mdi:restart
  restart_restartswitch = new restart::RestartSwitch();
  restart_restartswitch->set_component_source("restart.switch");
  App.register_component(restart_restartswitch);
  App.register_switch(restart_restartswitch);
  restart_restartswitch->set_name("Air Quality Kathy Bedroom Restart");
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
