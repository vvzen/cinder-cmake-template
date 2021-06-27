#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class Cinder_101_001App : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void Cinder_101_001App::setup()
{
}

void Cinder_101_001App::mouseDown( MouseEvent event )
{
}

void Cinder_101_001App::update()
{
}

void Cinder_101_001App::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( Cinder_101_001App, RendererGl )
