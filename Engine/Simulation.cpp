#include "Simulation.h"

namespace Engine {
    Simulation::Simulation(){
        srand(time(0));
    }

    void Simulation::changeLocation(AI_Agents::Agent& agent) {
        // simple random # gen which changes ai agent to either in capital city or not
        int locationInd = rand() % 2;
        std::string agentLocation = Constants_Location::LOCATIONS[agent.getLocation()];

        if (agent.getLocation() != locationInd){
            agent.setLocation(locationInd);
            std::cout << agent.getName() << " has moved to " << agentLocation << "!" << std::endl;
        }
        else {
            std::cout << agent.getName() << " has remained in " << agentLocation << "!" << std::endl;
        }
        
    }

    void Simulation::start() {

    }
}