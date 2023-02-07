#include "cpp_node_test/example_node.h"


int main(int argc, char** argv){
    // Set this node's logger level here ('Debug', 'Info', 'Warn', 'Error', 'Fatal')
    if (ros::console::set_logger_level(ROSCONSOLE_DEFAULT_NAME, ros::console::levels::Debug/*Set Level Here*/))
    {
        ros::console::notifyLoggerLevelsChanged();
    }


    ros::init(argc, argv, "example_node", ros::init_options::AnonymousName);

    ExampleNode node;
    node.publish();
    node.runSpin();

    return 0;
}