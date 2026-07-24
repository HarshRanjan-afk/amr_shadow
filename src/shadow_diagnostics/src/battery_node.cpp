#include <rclcpp/rclcpp.hpp>
#include <shadow_interfaces/msg/battery_status.hpp>
#include <chrono>

class BatteryNode : public rclcpp::Node
{
private:

        rclcpp::Publisher<shadow_interfaces::msg::BatteryStatus>::SharedPtr battery_publisher_;
        rclcpp::TimerBase::SharedPtr timer_;
        shadow_interfaces::msg::BatteryStatus current_battery_status_;
        void simulateBattery(){
            current_battery_status_.voltage -= 0.1;
            current_battery_status_.current -=0.01;
            current_battery_status_.percentage -=0.2f;
            current_battery_status_.temperature += 0.2f;
            current_battery_status_.is_connected = true;
            return;
        }

        void timerCallback(){
            simulateBattery();
            battery_publisher_->publish(current_battery_status_);
        }

public:

        BatteryNode(): Node("battery_node"){

            current_battery_status_.voltage = 24.0f;
            current_battery_status_.current =9.0f;
            current_battery_status_.percentage =100.0f;
            current_battery_status_.temperature = 35.0f;
            current_battery_status_.is_connected = true;

            battery_publisher_ = this-> create_publisher<shadow_interfaces::msg::BatteryStatus>("/battery_status", 10);

            timer_ = this->create_wall_timer(
                std::chrono::seconds(1),
                std::bind(&BatteryNode::timerCallback, this)
            );
        }
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<BatteryNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}