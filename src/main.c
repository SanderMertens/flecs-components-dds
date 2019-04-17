#include <include/dds.h>

void EcsComponentsDds(
    ecs_world_t *world,
    int flags,
    void *handles_out)
{
    ECS_COMPONENT(world, DdsDomainParticipant);
    ECS_COMPONENT(world, DdsWriter);
    ECS_COMPONENT(world, DdsReader);

    EcsComponentsDdsHandles *handles = handles_out;
    memset(handles, 0, sizeof(EcsComponentsDdsHandles));

    ECS_SET_COMPONENT(handles, DdsDomainParticipant);
    ECS_SET_COMPONENT(handles, DdsWriter);
    ECS_SET_COMPONENT(handles, DdsReader);
}
