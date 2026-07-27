// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace text_sensor;
logger::Logger *logger_logger;
status_led::StatusLED *status_led_statusled;
web_server_base::WebServerBase *web_server_base_webserverbase;
captive_portal::CaptivePortal *captive_portal_captiveportal;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
using namespace i2c;
i2c::I2CComponent *bus_a;
using namespace spi;
spi::SPIComponent *spi_spicomponent;
version::VersionTextSensor *version_versiontextsensor;
wifi_info::IPAddressWiFiInfo *wifi_info_ipaddresswifiinfo;
wifi_info::SSIDWiFiInfo *wifi_info_ssidwifiinfo;
wifi_info::BSSIDWiFiInfo *wifi_info_bssidwifiinfo;
uptime::UptimeSensor *uptime_uptimesensor;
max31856::MAX31856Sensor *max31856_max31856sensor;
max31856::MAX31856Sensor *max31856_max31856sensor_2;
max31856::MAX31856Sensor *max31856_max31856sensor_3;
mcp9808::MCP9808Sensor *mcp9808_mcp9808sensor;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter;
adc::ADCSensor *adc_adcsensor;
sensor::MultiplyFilter *sensor_multiplyfilter;
sensor::SlidingWindowMovingAverageFilter *sensor_slidingwindowmovingaveragefilter_2;
homeassistant::HomeassistantSensor *smoker_alert_low;
homeassistant::HomeassistantSensor *smoker_alert_high;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: cleversmoke
  //   platform: ESP32
  //   board: lolin_d32
  //   arduino_version: platformio/espressif32@3.2.0
  //   build_path: cleversmoke
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("cleversmoke", __DATE__ ", " __TIME__, false);
  // text_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // status_led:
  //   pin:
  //     number: 5
  //     mode: OUTPUT
  //     inverted: false
  //   id: status_led_statusled
  status_led_statusled = new status_led::StatusLED(new GPIOPin(5, OUTPUT, false));
  App.register_component(status_led_statusled);
  status_led_statusled->pre_setup();
  // web_server_base:
  //   id: web_server_base_webserverbase
  web_server_base_webserverbase = new web_server_base::WebServerBase();
  App.register_component(web_server_base_webserverbase);
  // captive_portal:
  //   id: captive_portal_captiveportal
  //   web_server_base_id: web_server_base_webserverbase
  captive_portal_captiveportal = new captive_portal::CaptivePortal(web_server_base_webserverbase);
  App.register_component(captive_portal_captiveportal);
  // wifi:
  //   ap:
  //     ssid: CleverSmoke Hotspot
  //     password: 3Im0UlUXPAqB
  //     id: wifi_wifiap
  //     ap_timeout: 1min
  //   id: wifi_wificomponent
  //   enable_mdns: true
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   networks:
  //   - ssid: As you wish
  //     password: '6037424348'
  //     id: wifi_wifiap_2
  //     priority: 0.0
  //   use_address: cleversmoke.local
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("cleversmoke.local");
  wifi::WiFiAP wifi_wifiap_2 = wifi::WiFiAP();
  wifi_wifiap_2.set_ssid("As you wish");
  wifi_wifiap_2.set_password("6037424348");
  wifi_wifiap_2.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap_2);
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("CleverSmoke Hotspot");
  wifi_wifiap.set_password("3Im0UlUXPAqB");
  wifi_wificomponent->set_ap(wifi_wifiap);
  wifi_wificomponent->set_ap_timeout(60000);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
  App.register_component(wifi_wificomponent);
  // ota:
  //   password: 12c25524012ea083d6e1a3e96392d18e
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
  ota_otacomponent->set_auth_password("12c25524012ea083d6e1a3e96392d18e");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // sensor:
  // i2c:
  //   sda: 21
  //   scl: 22
  //   scan: true
  //   id: bus_a
  //   frequency: 50000.0
  bus_a = new i2c::I2CComponent();
  App.register_component(bus_a);
  bus_a->set_sda_pin(21);
  bus_a->set_scl_pin(22);
  bus_a->set_frequency(50000);
  bus_a->set_scan(true);
  // spi:
  //   clk_pin:
  //     number: 18
  //     mode: OUTPUT
  //     inverted: false
  //   miso_pin:
  //     number: 19
  //     mode: INPUT
  //     inverted: false
  //   mosi_pin:
  //     number: 23
  //     mode: OUTPUT
  //     inverted: false
  //   id: spi_spicomponent
  spi_spicomponent = new spi::SPIComponent();
  App.register_component(spi_spicomponent);
  spi_spicomponent->set_clk(new GPIOPin(18, OUTPUT, false));
  spi_spicomponent->set_miso(new GPIOPin(19, INPUT, false));
  spi_spicomponent->set_mosi(new GPIOPin(23, OUTPUT, false));
  // substitutions:
  //   name: cleversmoke
  //   friendly_name: CleverSmoke
  // text_sensor.version:
  //   platform: version
  //   name: cleversmoke ESPHome Version
  //   id: version_versiontextsensor
  //   icon: mdi:new-box
  //   hide_timestamp: false
  version_versiontextsensor = new version::VersionTextSensor();
  App.register_text_sensor(version_versiontextsensor);
  version_versiontextsensor->set_name("cleversmoke ESPHome Version");
  version_versiontextsensor->set_icon("mdi:new-box");
  App.register_component(version_versiontextsensor);
  version_versiontextsensor->set_hide_timestamp(false);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: cleversmoke IP
  //     id: wifi_info_ipaddresswifiinfo
  //   ssid:
  //     name: cleversmoke SSID
  //     id: wifi_info_ssidwifiinfo
  //   bssid:
  //     name: cleversmoke BSSID
  //     id: wifi_info_bssidwifiinfo
  wifi_info_ipaddresswifiinfo = new wifi_info::IPAddressWiFiInfo();
  App.register_component(wifi_info_ipaddresswifiinfo);
  App.register_text_sensor(wifi_info_ipaddresswifiinfo);
  wifi_info_ipaddresswifiinfo->set_name("cleversmoke IP");
  wifi_info_ssidwifiinfo = new wifi_info::SSIDWiFiInfo();
  App.register_component(wifi_info_ssidwifiinfo);
  App.register_text_sensor(wifi_info_ssidwifiinfo);
  wifi_info_ssidwifiinfo->set_name("cleversmoke SSID");
  wifi_info_bssidwifiinfo = new wifi_info::BSSIDWiFiInfo();
  App.register_component(wifi_info_bssidwifiinfo);
  App.register_text_sensor(wifi_info_bssidwifiinfo);
  wifi_info_bssidwifiinfo->set_name("cleversmoke BSSID");
  // sensor.uptime:
  //   platform: uptime
  //   name: cleversmoke Uptime
  //   update_interval: 60s
  //   force_update: false
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   id: uptime_uptimesensor
  uptime_uptimesensor = new uptime::UptimeSensor();
  uptime_uptimesensor->set_update_interval(60000);
  App.register_component(uptime_uptimesensor);
  App.register_sensor(uptime_uptimesensor);
  uptime_uptimesensor->set_name("cleversmoke Uptime");
  uptime_uptimesensor->set_unit_of_measurement("s");
  uptime_uptimesensor->set_icon("mdi:timer-outline");
  uptime_uptimesensor->set_force_update(false);
  // sensor.max31856:
  //   platform: max31856
  //   name: cleversmoke Smoker
  //   icon: mdi:grill
  //   cs_pin:
  //     number: 5
  //     mode: OUTPUT
  //     inverted: false
  //   update_interval: 10s
  //   accuracy_decimals: 0
  //   force_update: false
  //   unit_of_measurement: °C
  //   device_class: temperature
  //   state_class: measurement
  //   id: max31856_max31856sensor
  //   mains_filter: 60HZ
  //   spi_id: spi_spicomponent
  max31856_max31856sensor = new max31856::MAX31856Sensor();
  max31856_max31856sensor->set_update_interval(10000);
  App.register_component(max31856_max31856sensor);
  max31856_max31856sensor->set_spi_parent(spi_spicomponent);
  max31856_max31856sensor->set_cs_pin(new GPIOPin(5, OUTPUT, false));
  App.register_sensor(max31856_max31856sensor);
  max31856_max31856sensor->set_name("cleversmoke Smoker");
  max31856_max31856sensor->set_device_class("temperature");
  max31856_max31856sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  max31856_max31856sensor->set_unit_of_measurement("\302\260C");
  max31856_max31856sensor->set_icon("mdi:grill");
  max31856_max31856sensor->set_accuracy_decimals(0);
  max31856_max31856sensor->set_force_update(false);
  max31856_max31856sensor->set_filter(max31856::FILTER_60HZ);
  // sensor.max31856:
  //   platform: max31856
  //   name: cleversmoke Meat 1
  //   icon: mdi:food-steak
  //   cs_pin:
  //     number: 17
  //     mode: OUTPUT
  //     inverted: false
  //   update_interval: 10s
  //   accuracy_decimals: 0
  //   force_update: false
  //   unit_of_measurement: °C
  //   device_class: temperature
  //   state_class: measurement
  //   id: max31856_max31856sensor_2
  //   mains_filter: 60HZ
  //   spi_id: spi_spicomponent
  max31856_max31856sensor_2 = new max31856::MAX31856Sensor();
  max31856_max31856sensor_2->set_update_interval(10000);
  App.register_component(max31856_max31856sensor_2);
  max31856_max31856sensor_2->set_spi_parent(spi_spicomponent);
  max31856_max31856sensor_2->set_cs_pin(new GPIOPin(17, OUTPUT, false));
  App.register_sensor(max31856_max31856sensor_2);
  max31856_max31856sensor_2->set_name("cleversmoke Meat 1");
  max31856_max31856sensor_2->set_device_class("temperature");
  max31856_max31856sensor_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  max31856_max31856sensor_2->set_unit_of_measurement("\302\260C");
  max31856_max31856sensor_2->set_icon("mdi:food-steak");
  max31856_max31856sensor_2->set_accuracy_decimals(0);
  max31856_max31856sensor_2->set_force_update(false);
  max31856_max31856sensor_2->set_filter(max31856::FILTER_60HZ);
  // sensor.max31856:
  //   platform: max31856
  //   name: cleversmoke Meat 2
  //   icon: mdi:food-steak
  //   cs_pin:
  //     number: 16
  //     mode: OUTPUT
  //     inverted: false
  //   update_interval: 10s
  //   accuracy_decimals: 0
  //   force_update: false
  //   unit_of_measurement: °C
  //   device_class: temperature
  //   state_class: measurement
  //   id: max31856_max31856sensor_3
  //   mains_filter: 60HZ
  //   spi_id: spi_spicomponent
  max31856_max31856sensor_3 = new max31856::MAX31856Sensor();
  max31856_max31856sensor_3->set_update_interval(10000);
  App.register_component(max31856_max31856sensor_3);
  max31856_max31856sensor_3->set_spi_parent(spi_spicomponent);
  max31856_max31856sensor_3->set_cs_pin(new GPIOPin(16, OUTPUT, false));
  App.register_sensor(max31856_max31856sensor_3);
  max31856_max31856sensor_3->set_name("cleversmoke Meat 2");
  max31856_max31856sensor_3->set_device_class("temperature");
  max31856_max31856sensor_3->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  max31856_max31856sensor_3->set_unit_of_measurement("\302\260C");
  max31856_max31856sensor_3->set_icon("mdi:food-steak");
  max31856_max31856sensor_3->set_accuracy_decimals(0);
  max31856_max31856sensor_3->set_force_update(false);
  max31856_max31856sensor_3->set_filter(max31856::FILTER_60HZ);
  // sensor.mcp9808:
  //   platform: mcp9808
  //   name: cleversmoke Outdoor Temp
  //   update_interval: 20s
  //   address: 0x18
  //   filters:
  //   - sliding_window_moving_average:
  //       window_size: 3
  //       send_every: 3
  //       send_first_at: 1
  //     type_id: sensor_slidingwindowmovingaveragefilter
  //   force_update: false
  //   unit_of_measurement: °C
  //   accuracy_decimals: 1
  //   device_class: temperature
  //   state_class: measurement
  //   id: mcp9808_mcp9808sensor
  //   i2c_id: bus_a
  mcp9808_mcp9808sensor = new mcp9808::MCP9808Sensor();
  mcp9808_mcp9808sensor->set_update_interval(20000);
  App.register_component(mcp9808_mcp9808sensor);
  mcp9808_mcp9808sensor->set_i2c_parent(bus_a);
  mcp9808_mcp9808sensor->set_i2c_address(0x18);
  App.register_sensor(mcp9808_mcp9808sensor);
  mcp9808_mcp9808sensor->set_name("cleversmoke Outdoor Temp");
  mcp9808_mcp9808sensor->set_device_class("temperature");
  mcp9808_mcp9808sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  mcp9808_mcp9808sensor->set_unit_of_measurement("\302\260C");
  mcp9808_mcp9808sensor->set_accuracy_decimals(1);
  mcp9808_mcp9808sensor->set_force_update(false);
  sensor_slidingwindowmovingaveragefilter = new sensor::SlidingWindowMovingAverageFilter(3, 3, 1);
  mcp9808_mcp9808sensor->set_filters({sensor_slidingwindowmovingaveragefilter});
  // sensor.adc:
  //   platform: adc
  //   pin: 35
  //   attenuation: 11db
  //   name: cleversmoke Battery
  //   update_interval: 60s
  //   filters:
  //   - multiply: 1.861
  //     type_id: sensor_multiplyfilter
  //   - sliding_window_moving_average:
  //       window_size: 3
  //       send_every: 3
  //       send_first_at: 1
  //     type_id: sensor_slidingwindowmovingaveragefilter_2
  //   force_update: false
  //   unit_of_measurement: V
  //   accuracy_decimals: 2
  //   device_class: voltage
  //   state_class: measurement
  //   id: adc_adcsensor
  adc_adcsensor = new adc::ADCSensor();
  adc_adcsensor->set_update_interval(60000);
  App.register_component(adc_adcsensor);
  App.register_sensor(adc_adcsensor);
  adc_adcsensor->set_name("cleversmoke Battery");
  adc_adcsensor->set_device_class("voltage");
  adc_adcsensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  adc_adcsensor->set_unit_of_measurement("V");
  adc_adcsensor->set_accuracy_decimals(2);
  adc_adcsensor->set_force_update(false);
  sensor_multiplyfilter = new sensor::MultiplyFilter(1.861f);
  sensor_slidingwindowmovingaveragefilter_2 = new sensor::SlidingWindowMovingAverageFilter(3, 3, 1);
  adc_adcsensor->set_filters({sensor_multiplyfilter, sensor_slidingwindowmovingaveragefilter_2});
  adc_adcsensor->set_pin(35);
  adc_adcsensor->set_attenuation(ADC_ATTEN_DB_11);
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: smoker_alert_low
  //   entity_id: input_number.smoker_alert_low
  //   internal: true
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: smoker_alert_low
  smoker_alert_low = new homeassistant::HomeassistantSensor();
  App.register_component(smoker_alert_low);
  App.register_sensor(smoker_alert_low);
  smoker_alert_low->set_name("smoker_alert_low");
  smoker_alert_low->set_internal(true);
  smoker_alert_low->set_accuracy_decimals(1);
  smoker_alert_low->set_force_update(false);
  smoker_alert_low->set_entity_id("input_number.smoker_alert_low");
  // sensor.homeassistant:
  //   platform: homeassistant
  //   id: smoker_alert_high
  //   entity_id: input_number.smoker_alert_high
  //   internal: true
  //   force_update: false
  //   accuracy_decimals: 1
  //   name: smoker_alert_high
  smoker_alert_high = new homeassistant::HomeassistantSensor();
  App.register_component(smoker_alert_high);
  App.register_sensor(smoker_alert_high);
  smoker_alert_high->set_name("smoker_alert_high");
  smoker_alert_high->set_internal(true);
  smoker_alert_high->set_accuracy_decimals(1);
  smoker_alert_high->set_force_update(false);
  smoker_alert_high->set_entity_id("input_number.smoker_alert_high");
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
