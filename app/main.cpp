#include <iostream>
#include <plan.h>


int main() {
  std::shared_ptr<PlanBuilder> kuh (new EmptyPlanBuilder());
  Director dir;
  dir.setPlan(kuh);
  dir.constructPlan();
  kuh->draw();

  kuh.reset(new KitchenPlanBuilder);
  dir.setPlan(kuh);
  dir.constructPlan();
  kuh->draw();

    return 0;
}
