// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
logger::Logger *logger_logger;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
status_led::StatusLED *status_led_statusled;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
using namespace output;
gpio::GPIOBinaryOutput *freezer_temp_led;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
gpio::GPIOBinaryOutput *freezer_door_led;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_4;
dallas::ESPOneWire *dallas_esponewire;
dallas::DallasComponent *dallas_dallascomponent;
dallas::DallasTemperatureSensor *temp;
sensor::ValueRangeTrigger *sensor_valuerangetrigger;
Automation<float> *automation;
LambdaAction<float> *lambdaaction;
output::TurnOnAction<float> *output_turnonaction;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_2;
Automation<float> *automation_2;
LambdaAction<float> *lambdaaction_2;
output::TurnOffAction<float> *output_turnoffaction;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor;
binary_sensor::PressTrigger *binary_sensor_presstrigger;
Automation<> *automation_3;
output::TurnOnAction<> *output_turnonaction_2;
binary_sensor::ReleaseTrigger *binary_sensor_releasetrigger;
Automation<> *automation_4;
output::TurnOffAction<> *output_turnoffaction_2;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_5;
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
  //   name: cleverfreezer
  //   build_path: cleverfreezer
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("cleverfreezer", __DATE__ ", " __TIME__, false);
  // binary_sensor:
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
  // status_led:
  //   pin:
  //     number: 2
  //     inverted: true
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin
  //   id: status_led_statusled
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(2);
  esphome_esp8266_esp8266gpiopin->set_inverted(true);
  esphome_esp8266_esp8266gpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  status_led_statusled = new status_led::StatusLED(esphome_esp8266_esp8266gpiopin);
  status_led_statusled->set_component_source("status_led");
  App.register_component(status_led_statusled);
  status_led_statusled->pre_setup();
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
  //     ssid: Cleverfreezer Fallback Hotspot
  //     password: eEROYzbEWVSZ
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
  //   use_address: cleverfreezer.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("cleverfreezer.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("As you wish");
  wifi_wifiap_2.set_password("6037424348");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Cleverfreezer Fallback Hotspot");
  wifi_wifiap.set_password("eEROYzbEWVSZ");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
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
  // output:
  // output.gpio:
  //   platform: gpio
  //   pin:
  //     number: 14
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin_2
  //   id: freezer_temp_led
  freezer_temp_led = new gpio::GPIOBinaryOutput();
  freezer_temp_led->set_component_source("gpio.output");
  App.register_component(freezer_temp_led);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(14);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  freezer_temp_led->set_pin(esphome_esp8266_esp8266gpiopin_2);
  // output.gpio:
  //   platform: gpio
  //   pin:
  //     number: 12
  //     inverted: true
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_3
  //   id: freezer_door_led
  freezer_door_led = new gpio::GPIOBinaryOutput();
  freezer_door_led->set_component_source("gpio.output");
  App.register_component(freezer_door_led);
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(12);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(true);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  freezer_door_led->set_pin(esphome_esp8266_esp8266gpiopin_3);
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
  //     id: esphome_esp8266_esp8266gpiopin_4
  //   update_interval: 120s
  //   id: dallas_dallascomponent
  //   one_wire_id: dallas_esponewire
  esphome_esp8266_esp8266gpiopin_4 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_4->set_pin(4);
  esphome_esp8266_esp8266gpiopin_4->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  dallas_esponewire = new dallas::ESPOneWire(esphome_esp8266_esp8266gpiopin_4);
  dallas_dallascomponent = new dallas::DallasComponent(dallas_esponewire);
  dallas_dallascomponent->set_update_interval(120000);
  dallas_dallascomponent->set_component_source("dallas");
  App.register_component(dallas_dallascomponent);
  // sensor.dallas:
  //   platform: dallas
  //   address: 0x743C01D60785F928
  //   name: Freezer
  //   id: temp
  //   on_value_range:
  //   - above: -15.0
  //     then:
  //     - logger.log:
  //         format: Freezer temp too warm!!
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction
  //     - output.turn_on:
  //         id: freezer_temp_led
  //       type_id: output_turnonaction
  //     automation_id: automation
  //     trigger_id: sensor_valuerangetrigger
  //   - below: -15.0
  //     then:
  //     - logger.log:
  //         format: Freezer Temp OK
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_2
  //     - output.turn_off:
  //         id: freezer_temp_led
  //       type_id: output_turnoffaction
  //     automation_id: automation_2
  //     trigger_id: sensor_valuerangetrigger_2
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  //   dallas_id: dallas_dallascomponent
  //   resolution: 12
  temp = new dallas::DallasTemperatureSensor();
  temp->set_address(0x743C01D60785F928);
  temp->set_resolution(12);
  temp->set_parent(dallas_dallascomponent);
  dallas_dallascomponent->register_sensor(temp);
  App.register_sensor(temp);
  temp->set_name("Freezer");
  temp->set_disabled_by_default(false);
  temp->set_device_class("temperature");
  temp->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  temp->set_unit_of_measurement("\302\260C");
  temp->set_accuracy_decimals(1);
  temp->set_force_update(false);
  sensor_valuerangetrigger = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger);
  sensor_valuerangetrigger->set_min(-15.0f);
  automation = new Automation<float>(sensor_valuerangetrigger);
  lambdaaction = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Freezer temp too warm!!");
  });
  output_turnonaction = new output::TurnOnAction<float>(freezer_temp_led);
  automation->add_actions({lambdaaction, output_turnonaction});
  sensor_valuerangetrigger_2 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_2->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_2);
  sensor_valuerangetrigger_2->set_max(-15.0f);
  automation_2 = new Automation<float>(sensor_valuerangetrigger_2);
  lambdaaction_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Freezer Temp OK");
  });
  output_turnoffaction = new output::TurnOffAction<float>(freezer_temp_led);
  automation_2->add_actions({lambdaaction_2, output_turnoffaction});
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 13
  //     mode:
  //       input: true
  //       pullup: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin_5
  //   name: Freezer Door
  //   device_class: door
  //   on_press:
  //   - then:
  //     - output.turn_on:
  //         id: freezer_door_led
  //       type_id: output_turnonaction_2
  //     automation_id: automation_3
  //     trigger_id: binary_sensor_presstrigger
  //   on_release:
  //   - then:
  //     - output.turn_off:
  //         id: freezer_door_led
  //       type_id: output_turnoffaction_2
  //     automation_id: automation_4
  //     trigger_id: binary_sensor_releasetrigger
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor
  gpio_gpiobinarysensor = new gpio::GPIOBinarySensor();
  gpio_gpiobinarysensor->set_component_source("gpio.binary_sensor");
  App.register_component(gpio_gpiobinarysensor);
  App.register_binary_sensor(gpio_gpiobinarysensor);
  gpio_gpiobinarysensor->set_name("Freezer Door");
  gpio_gpiobinarysensor->set_disabled_by_default(false);
  gpio_gpiobinarysensor->set_device_class("door");
  binary_sensor_presstrigger = new binary_sensor::PressTrigger(gpio_gpiobinarysensor);
  automation_3 = new Automation<>(binary_sensor_presstrigger);
  output_turnonaction_2 = new output::TurnOnAction<>(freezer_door_led);
  automation_3->add_actions({output_turnonaction_2});
  binary_sensor_releasetrigger = new binary_sensor::ReleaseTrigger(gpio_gpiobinarysensor);
  automation_4 = new Automation<>(binary_sensor_releasetrigger);
  output_turnoffaction_2 = new output::TurnOffAction<>(freezer_door_led);
  automation_4->add_actions({output_turnoffaction_2});
  esphome_esp8266_esp8266gpiopin_5 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_5->set_pin(13);
  esphome_esp8266_esp8266gpiopin_5->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_5->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  gpio_gpiobinarysensor->set_pin(esphome_esp8266_esp8266gpiopin_5);
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
