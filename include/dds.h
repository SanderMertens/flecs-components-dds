#ifndef FLECS_COMPONENTS_DDS_H
#define FLECS_COMPONENTS_DDS_H

/* This generated file contains includes for project dependencies */
#include "bake_config.h"

typedef struct DdsDomainParticipant {
    unsigned int domain_id;
} DdsDomainParticipant;

typedef struct DdsWriter {
    const char *type_name;
    const char *topic_name;
} DdsWriter;

typedef struct DdsReader {
    const char *type_name;
    const char *topic_name;
} DdsReader;

typedef struct EcsComponentsDdsHandles {
    ECS_DECLARE_COMPONENT(DdsDomainParticipant);
    ECS_DECLARE_COMPONENT(DdsWriter);
    ECS_DECLARE_COMPONENT(DdsReader);
} EcsComponentsDdsHandles;

void EcsComponentsDds(
    ecs_world_t *world,
    int flags,
    void *handles_out);

#define EcsComponentsDds_ImportHandles(handles)\
    ECS_IMPORT_COMPONENT(handles, DdsDomainParticipant);\
    ECS_IMPORT_COMPONENT(handles, DdsWriter);\
    ECS_IMPORT_COMPONENT(handles, DdsReader);

#endif

