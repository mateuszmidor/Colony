/**
 *   @file: LocalTransformComponent.h
 *
 *   @date: May 20, 2016
 * @author: Mateusz Midor
 */

#ifndef SOURCE_LOCALTRANSFORMCOMPONENT_H_
#define SOURCE_LOCALTRANSFORMCOMPONENT_H_

#include <QtGui/QVector3D>
#include <QtGui/QMatrix4x4>
#include "Component.h"

/**
 * @class	LocalTransformComponent
 * @brief	Represents local transformation of GameObject
 */
class LocalTransformComponent: public Component {
public:
    // local transformations
    QVector3D translate;
    QVector3D rotate;
    QVector3D scale;

    // absolute transform will be computed as combination of parent nodes and this local transform
    QMatrix4x4 absolute_transform;

    LocalTransformComponent();
    virtual ~LocalTransformComponent();

    QMatrix4x4 getLocalTransform() const;
};

#endif /* SOURCE_LOCALTRANSFORMCOMPONENT_H_ */
