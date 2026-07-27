// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
logger::Logger *logger_logger;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
dallas::ESPOneWire *dallas_esponewire;
dallas::DallasComponent *dallas_dallascomponent;
dallas::DallasTemperatureSensor *temp;
sensor::ValueRangeTrigger *sensor_valuerangetrigger;
Automation<float> *automation;
LambdaAction<float> *lambdaaction;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_2;
Automation<float> *automation_2;
LambdaAction<float> *lambdaaction_2;
wifi_signal::WiFiSignalSensor *wifi_signal_wifisignalsensor;
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
  //   name: cleverfreezer-se
  //   build_path: cleverfreezer-se
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("cleverfreezer-se", __DATE__ ", " __TIME__, false);
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
  //     ssid: Cleverfreezer-SE
  //     password: PZKMTWjCb8V0
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
  //   use_address: cleverfreezer-se.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("cleverfreezer-se.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("As you wish");
  wifi_wifiap_2.set_password("6037424348");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Cleverfreezer-SE");
  wifi_wifiap.set_password("PZKMTWjCb8V0");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: 9af6c481b44ef55d735a8a3832ff02ff
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("9af6c481b44ef55d735a8a3832ff02ff");
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
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // dallas:
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin
  //   update_interval: 120s
  //   id: dallas_dallascomponent
  //   one_wire_id: dallas_esponewire
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(4);
  esphome_esp8266_esp8266gpiopin->set_inverted(false);
  esphome_esp8266_esp8266gpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  dallas_esponewire = new dallas::ESPOneWire(esphome_esp8266_esp8266gpiopin);
  dallas_dallascomponent = new dallas::DallasComponent(dallas_esponewire);
  dallas_dallascomponent->set_update_interval(120000);
  dallas_dallascomponent->set_component_source("dallas");
  App.register_component(dallas_dallascomponent);
  // sensor.dallas:
  //   platform: dallas
  //   address: 0x623C01D60753B128
  //   name: Freezer2
  //   id: temp
  //   force_update: true
  //   on_value_range:
  //   - above: -7.0
  //     then:
  //     - logger.log:
  //         format: Freezer 2 temp too warm!!
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction
  //     automation_id: automation
  //     trigger_id: sensor_valuerangetrigger
  //   - below: -12.0
  //     then:
  //     - logger.log:
  //         format: Freezer 2 Temp OK
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_2
  //     automation_id: automation_2
  //     trigger_id: sensor_valuerangetrigger_2
  //   disabled_by_default: false
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  //   dallas_id: dallas_dallascomponent
  //   resolution: 12
  temp = new dallas::DallasTemperatureSensor();
  temp->set_address(0x623C01D60753B128);
  temp->set_resolution(12);
  temp->set_parent(dallas_dallascomponent);
  dallas_dallascomponent->register_sensor(temp);
  App.register_sensor(temp);
  temp->set_name("Freezer2");
  temp->set_disabled_by_default(false);
  temp->set_device_class("temperature");
  temp->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  temp->set_unit_of_measurement("\302\260C");
  temp->set_accuracy_decimals(1);
  temp->set_force_update(true);
  sensor_valuerangetrigger = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger);
  sensor_valuerangetrigger->set_min(-7.0f);
  automation = new Automation<float>(sensor_valuerangetrigger);
  lambdaaction = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Freezer 2 temp too warm!!");
  });
  automation->add_actions({lambdaaction});
  sensor_valuerangetrigger_2 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_2->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_2);
  sensor_valuerangetrigger_2->set_max(-12.0f);
  automation_2 = new Automation<float>(sensor_valuerangetrigger_2);
  lambdaaction_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Freezer 2 Temp OK");
  });
  automation_2->add_actions({lambdaaction_2});
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: Freezer2 WiFi Signal
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
  wifi_signal_wifisignalsensor->set_name("Freezer2 WiFi Signal");
  wifi_signal_wifisignalsensor->set_disabled_by_default(false);
  wifi_signal_wifisignalsensor->set_device_class("signal_strength");
  wifi_signal_wifisignalsensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_wifisignalsensor->set_unit_of_measurement("dBm");
  wifi_signal_wifisignalsensor->set_accuracy_decimals(0);
  wifi_signal_wifisignalsensor->set_force_update(false);
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
