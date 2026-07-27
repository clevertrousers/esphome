// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace fan;
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
gpio::GPIOBinaryOutput *temp_led;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
esp8266_pwm::ESP8266PWM *pwm_output;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_4;
dallas::ESPOneWire *dallas_esponewire;
dallas::DallasComponent *dallas_dallascomponent;
dallas::DallasTemperatureSensor *temp;
sensor::ValueRangeTrigger *sensor_valuerangetrigger;
Automation<float> *automation;
output::TurnOnAction<float> *output_turnonaction;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_2;
Automation<float> *automation_2;
LambdaAction<float> *lambdaaction;
output::TurnOffAction<float> *output_turnoffaction;
fan::FanState *pwmfan;
speed::SpeedFan *speed_speedfan;
mdns::MDNSComponent *mdns_mdnscomponent;
fan::TurnOffAction<float> *fan_turnoffaction;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_3;
Automation<float> *automation_3;
LambdaAction<float> *lambdaaction_2;
fan::TurnOnAction<float> *fan_turnonaction;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_4;
Automation<float> *automation_4;
LambdaAction<float> *lambdaaction_3;
fan::TurnOnAction<float> *fan_turnonaction_2;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_5;
Automation<float> *automation_5;
LambdaAction<float> *lambdaaction_4;
fan::TurnOnAction<float> *fan_turnonaction_3;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_6;
Automation<float> *automation_6;
LambdaAction<float> *lambdaaction_5;
fan::TurnOnAction<float> *fan_turnonaction_4;
sensor::ValueRangeTrigger *sensor_valuerangetrigger_7;
Automation<float> *automation_7;
LambdaAction<float> *lambdaaction_6;
fan::TurnOnAction<float> *fan_turnonaction_5;
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
  //   name: cleverfan
  //   build_path: cleverfan
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("cleverfan", __DATE__ ", " __TIME__, false);
  // fan:
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
  //     ssid: Cleverfan Fallback Hotspot
  //     password: FrfkfFcvIM7D
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
  //   use_address: cleverfan.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("cleverfan.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("As you wish");
  wifi_wifiap_2.set_password("6037424348");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("Cleverfan Fallback Hotspot");
  wifi_wifiap.set_password("FrfkfFcvIM7D");
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
  //     id: esphome_esp8266_esp8266gpiopin_2
  //     inverted: false
  //   id: temp_led
  temp_led = new gpio::GPIOBinaryOutput();
  temp_led->set_component_source("gpio.output");
  App.register_component(temp_led);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(14);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  temp_led->set_pin(esphome_esp8266_esp8266gpiopin_2);
  // output.esp8266_pwm:
  //   platform: esp8266_pwm
  //   pin:
  //     number: 4
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_3
  //     inverted: false
  //   frequency: 100.0
  //   id: pwm_output
  //   min_power: 0.0
  //   max_power: 1.0
  //   zero_means_zero: false
  pwm_output = new esp8266_pwm::ESP8266PWM();
  pwm_output->set_component_source("esp8266_pwm.output");
  App.register_component(pwm_output);
  pwm_output->set_max_power(1.0f);
  pwm_output->set_min_power(0.0f);
  pwm_output->set_zero_means_zero(false);
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(4);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  pwm_output->set_pin(esphome_esp8266_esp8266gpiopin_3);
  pwm_output->set_frequency(100.0f);
  // dallas:
  //   pin:
  //     number: 5
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_4
  //     inverted: false
  //   update_interval: 15s
  //   id: dallas_dallascomponent
  //   one_wire_id: dallas_esponewire
  esphome_esp8266_esp8266gpiopin_4 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_4->set_pin(5);
  esphome_esp8266_esp8266gpiopin_4->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  dallas_esponewire = new dallas::ESPOneWire(esphome_esp8266_esp8266gpiopin_4);
  dallas_dallascomponent = new dallas::DallasComponent(dallas_esponewire);
  dallas_dallascomponent->set_update_interval(15000);
  dallas_dallascomponent->set_component_source("dallas");
  App.register_component(dallas_dallascomponent);
  // sensor.dallas:
  //   platform: dallas
  //   address: 0x583C01D607CF5628
  //   name: Xbox Cabinet
  //   id: temp
  //   on_value_range:
  //   - above: 26.7
  //     then:
  //     - output.turn_on:
  //         id: temp_led
  //       type_id: output_turnonaction
  //     automation_id: automation
  //     trigger_id: sensor_valuerangetrigger
  //   - below: 26.7
  //     then:
  //     - logger.log:
  //         format: Temp <25 Fan OFF
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction
  //     - output.turn_off:
  //         id: temp_led
  //       type_id: output_turnoffaction
  //     - fan.turn_off:
  //         id: pwmfan
  //       type_id: fan_turnoffaction
  //     automation_id: automation_2
  //     trigger_id: sensor_valuerangetrigger_2
  //   - above: 26.7
  //     below: 29.4
  //     then:
  //     - logger.log:
  //         format: Temp >80<85 Fan 4
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_2
  //     - fan.turn_on:
  //         id: pwmfan
  //         speed: 4
  //       type_id: fan_turnonaction
  //     automation_id: automation_3
  //     trigger_id: sensor_valuerangetrigger_3
  //   - above: 29.4
  //     below: 32.2
  //     then:
  //     - logger.log:
  //         format: Temp >85<90 Fan 6
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_3
  //     - fan.turn_on:
  //         id: pwmfan
  //         speed: 6
  //       type_id: fan_turnonaction_2
  //     automation_id: automation_4
  //     trigger_id: sensor_valuerangetrigger_4
  //   - above: 32.2
  //     below: 35.0
  //     then:
  //     - logger.log:
  //         format: Temp >90<95 Fan 8
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_4
  //     - fan.turn_on:
  //         id: pwmfan
  //         speed: 8
  //       type_id: fan_turnonaction_3
  //     automation_id: automation_5
  //     trigger_id: sensor_valuerangetrigger_5
  //   - above: 35.0
  //     below: 37.8
  //     then:
  //     - logger.log:
  //         format: Temp >95<100 Fan 9
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_5
  //     - fan.turn_on:
  //         id: pwmfan
  //         speed: 9
  //       type_id: fan_turnonaction_4
  //     automation_id: automation_6
  //     trigger_id: sensor_valuerangetrigger_6
  //   - above: 37.8
  //     then:
  //     - logger.log:
  //         format: Temp >100 Fan 10
  //         args: []
  //         level: DEBUG
  //         tag: main
  //       type_id: lambdaaction_6
  //     - fan.turn_on:
  //         id: pwmfan
  //         speed: 10
  //       type_id: fan_turnonaction_5
  //     automation_id: automation_7
  //     trigger_id: sensor_valuerangetrigger_7
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  //   dallas_id: dallas_dallascomponent
  //   resolution: 12
  temp = new dallas::DallasTemperatureSensor();
  temp->set_address(0x583C01D607CF5628);
  temp->set_resolution(12);
  temp->set_parent(dallas_dallascomponent);
  dallas_dallascomponent->register_sensor(temp);
  App.register_sensor(temp);
  temp->set_name("Xbox Cabinet");
  temp->set_disabled_by_default(false);
  temp->set_device_class("temperature");
  temp->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  temp->set_unit_of_measurement("\302\260C");
  temp->set_accuracy_decimals(1);
  temp->set_force_update(false);
  sensor_valuerangetrigger = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger);
  sensor_valuerangetrigger->set_min(26.7f);
  automation = new Automation<float>(sensor_valuerangetrigger);
  output_turnonaction = new output::TurnOnAction<float>(temp_led);
  automation->add_actions({output_turnonaction});
  sensor_valuerangetrigger_2 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_2->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_2);
  sensor_valuerangetrigger_2->set_max(26.7f);
  automation_2 = new Automation<float>(sensor_valuerangetrigger_2);
  lambdaaction = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temp <25 Fan OFF");
  });
  output_turnoffaction = new output::TurnOffAction<float>(temp_led);
  // fan.speed:
  //   platform: speed
  //   output: pwm_output
  //   name: Xbox Fan
  //   id: pwmfan
  //   speed_count: 10
  //   disabled_by_default: false
  //   output_id: speed_speedfan
  pwmfan = new fan::FanState();
  App.register_fan(pwmfan);
  pwmfan->set_component_source("fan");
  App.register_component(pwmfan);
  pwmfan->set_name("Xbox Fan");
  pwmfan->set_disabled_by_default(false);
  speed_speedfan = new speed::SpeedFan(pwmfan, pwm_output, 10);
  speed_speedfan->set_component_source("speed.fan");
  App.register_component(speed_speedfan);
  // socket:
  //   implementation: lwip_tcp
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  fan_turnoffaction = new fan::TurnOffAction<float>(pwmfan);
  automation_2->add_actions({lambdaaction, output_turnoffaction, fan_turnoffaction});
  sensor_valuerangetrigger_3 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_3->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_3);
  sensor_valuerangetrigger_3->set_min(26.7f);
  sensor_valuerangetrigger_3->set_max(29.4f);
  automation_3 = new Automation<float>(sensor_valuerangetrigger_3);
  lambdaaction_2 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temp >80<85 Fan 4");
  });
  fan_turnonaction = new fan::TurnOnAction<float>(pwmfan);
  fan_turnonaction->set_speed(4);
  automation_3->add_actions({lambdaaction_2, fan_turnonaction});
  sensor_valuerangetrigger_4 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_4->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_4);
  sensor_valuerangetrigger_4->set_min(29.4f);
  sensor_valuerangetrigger_4->set_max(32.2f);
  automation_4 = new Automation<float>(sensor_valuerangetrigger_4);
  lambdaaction_3 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temp >85<90 Fan 6");
  });
  fan_turnonaction_2 = new fan::TurnOnAction<float>(pwmfan);
  fan_turnonaction_2->set_speed(6);
  automation_4->add_actions({lambdaaction_3, fan_turnonaction_2});
  sensor_valuerangetrigger_5 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_5->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_5);
  sensor_valuerangetrigger_5->set_min(32.2f);
  sensor_valuerangetrigger_5->set_max(35.0f);
  automation_5 = new Automation<float>(sensor_valuerangetrigger_5);
  lambdaaction_4 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temp >90<95 Fan 8");
  });
  fan_turnonaction_3 = new fan::TurnOnAction<float>(pwmfan);
  fan_turnonaction_3->set_speed(8);
  automation_5->add_actions({lambdaaction_4, fan_turnonaction_3});
  sensor_valuerangetrigger_6 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_6->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_6);
  sensor_valuerangetrigger_6->set_min(35.0f);
  sensor_valuerangetrigger_6->set_max(37.8f);
  automation_6 = new Automation<float>(sensor_valuerangetrigger_6);
  lambdaaction_5 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temp >95<100 Fan 9");
  });
  fan_turnonaction_4 = new fan::TurnOnAction<float>(pwmfan);
  fan_turnonaction_4->set_speed(9);
  automation_6->add_actions({lambdaaction_5, fan_turnonaction_4});
  sensor_valuerangetrigger_7 = new sensor::ValueRangeTrigger(temp);
  sensor_valuerangetrigger_7->set_component_source("sensor");
  App.register_component(sensor_valuerangetrigger_7);
  sensor_valuerangetrigger_7->set_min(37.8f);
  automation_7 = new Automation<float>(sensor_valuerangetrigger_7);
  lambdaaction_6 = new LambdaAction<float>([=](float x) -> void {
      ESP_LOGD("main", "Temp >100 Fan 10");
  });
  fan_turnonaction_5 = new fan::TurnOnAction<float>(pwmfan);
  fan_turnonaction_5->set_speed(10);
  automation_7->add_actions({lambdaaction_6, fan_turnonaction_5});
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
