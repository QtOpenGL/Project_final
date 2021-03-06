#ifndef OPENGLWIDGET_H
#define OPENGLWIDGET_H
#include <ngl/Camera.h>
#include <ngl/Colour.h>
#include <ngl/Light.h>
#include <ngl/Text.h>
#include <ngl/SimpleVAO.h>
#include <ngl/VAOPrimitives.h>
#include <ngl/Transformation.h>
#include <QOpenGLWidget>
#include "WindowParams.h"
#include <memory>
#include "World.h"
#include "Boid.h"


class OpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    OpenGLWidget(QWidget *_parent);
    ~OpenGLWidget();
    void newFlock(int _numBoids, bool _randomizeInitialPosition);


public slots:
    void toggleLeader(bool _leaderState);
    void setPredator();
    void addObstacle(std::string _obstacleType);
    void addFood();
    void removeFood();
    void removeObstacle();
    void updateObstacleSize(float _size);
    void addBoid(bool _randomizeInitialPosition);
    void removeBoid();
protected:
    WinParams m_win;
    ngl::Camera m_cam;
    ngl::Vec3 m_modelPos;
    ngl::Mat4 m_mouseGlobalTX;
    std::unique_ptr<ngl::AbstractVAO> m_boidVAO;
    std::unique_ptr<ngl::AbstractVAO> m_boundingBoxVAO;

    void initializeGL();
    void paintGL();
    void resizeGL(int _w, int _h);
    void timerEvent(QTimerEvent *);

    void setSeparation(float _separation);
    void setAlignment(float _alignment);
    void setCohesion(float _cohesion);





private:
    void keyPressEvent(QKeyEvent *_event);
    void mouseMoveEvent (QMouseEvent * _event );
    void mousePressEvent ( QMouseEvent *_event);
    void mouseReleaseEvent ( QMouseEvent *_event );
    void wheelEvent( QWheelEvent *_event);

    void buildBoidVAO();
    void buildBoundingBoxVAO();
    void loadMatrices();

    ngl::Transformation m_tx;
    ngl::VAOPrimitives *m_obstacle;
    ngl::VAOPrimitives *m_food;
    World *m_world;
    bool m_leader;
};

#endif // OPENGLWIDGET_H
