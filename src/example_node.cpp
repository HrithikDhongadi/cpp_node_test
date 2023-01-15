#include "cpp_node_test/example_node.h"

ExampleNode::ExampleNode() {
    sub_ = nh_.subscribe("example_topic", 10, &ExampleNode::callback, this);
    pub_ = nh_.advertise<std_msgs::Int16>("example_topic", 10);
}

void ExampleNode::runSpin() {
    ros::spin();
}

void ExampleNode::publish() {
    int x = 0;
    ros::Rate rate(2);
    std_msgs::Int16 pub_msg;
    while (x < 10)
    {
        pub_msg.data = x+1;
        pub_.publish(pub_msg);
        x++;
        rate.sleep();
        
    }
}

void ExampleNode::callback(const std_msgs::Int16::ConstPtr& msg) {
    ROS_INFO("Received message: %d", msg->data);
}
