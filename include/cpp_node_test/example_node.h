#ifndef EXAMPLE_NODE_H
#define EXAMPLE_NODE_H

#include "ros/ros.h"
#include <std_msgs/Int16.h>

class ExampleNode{
    public:
        ExampleNode();
        void runSpin();
        void publish();
        
    private:
        ros::NodeHandle nh_;
        ros::Subscriber sub_;
        ros::Publisher pub_;
        void callback(const std_msgs::Int16::ConstPtr& msg);
};


#endif