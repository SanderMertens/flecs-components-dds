#include <flecs_components_dds.h>

void FlecsComponentsDdsImport(
    ecs_world_t *world,
    int flags)
{
    ECS_MODULE(world, FlecsComponentsDds);

    ECS_COMPONENT(world, DdsDomainParticipant);
    ECS_COMPONENT(world, DdsWriter);
    ECS_COMPONENT(world, DdsReader);

    ECS_SET_COMPONENT(handles, DdsDomainParticipant);
    ECS_SET_COMPONENT(handles, DdsWriter);
    ECS_SET_COMPONENT(handles, DdsReader);
}
