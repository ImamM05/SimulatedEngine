#include "Simulation.h"

namespace Engine {
    Simulation::Simulation(){
        srand(time(0));
    }

    void Simulation::changeLocation(AI_Agents::Agent& agent) {
        // simple random # gen which changes ai agent to either in capital city or not
        int newLocID = rand() % 4;

        std::string agentLocation = Constants_Location::LOCATIONS.at(agent.getLocationID());

        switch (agent.getLocationID()) {
            case Constants_Location::CAP_CITY_LC_ID:
                if (agent.getLocationID() != newLocID){
                    agent.setLocation(newLocID);
                    std::cout << agent.getName() << " has moved to " << agentLocation << "!" << std::endl;
                }
                else {
                    std::cout << agent.getName() << " has remained in " << agentLocation << "!" << std::endl;
                }
                break;
            default:
                std::cout << "Error: " << agent.getName() << " failed to change location." << std::endl;
        }
        
    }

    void Simulation::start() {

    }
}