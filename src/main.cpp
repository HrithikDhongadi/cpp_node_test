#include "cpp_node_test/example_node.h"

int main(int argc, char** argv){
    ros::init(argc, argv, "example_node");
    ExampleNode node;
    node.publish();
    node.runSpin();
    return 0;
}