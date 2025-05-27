#include "ConnectorConfiguration.h"

FConnectorConfiguration::FConnectorConfiguration() {
    this->SocketIndex = 0;
    this->CustomData = 0;
    this->Flags = EConnectorConfigurationFlag::None;
}

