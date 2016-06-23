#include <iostream>
#include <plan.h>

int main()
{
    Director dir;
    //BathroomPlanBuilder
    std::cout << "Bathroom" << std::endl;
    std::shared_ptr<PlanBuilder> room(new BathroomPlanBuilder());
    dir.setPlan(room);
    dir.constructPlan();
    room->draw();

    //BedroomPlanBuilder
    std::cout << "Bedroom" << std::endl;
    room.reset(new BedroomPlanBuilder());
    dir.setPlan(room);
    dir.constructPlan();
    room->draw();

    return 0;
}
