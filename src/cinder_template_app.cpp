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
	void cleanup() override;
};

void Cinder_101_001App::setup()
{
    cout << "Starting app.." << endl;
    cout << "width:  " << getWindowWidth() << endl;
    cout << "height: " << getWindowHeight() << endl;
}

void Cinder_101_001App::mouseDown( MouseEvent event )
{

}

void Cinder_101_001App::update()
{

}

void Cinder_101_001App::draw()
{
	gl::clear(Colorf(0.3f, 0.3f, 0.3f));
}

void Cinder_101_001App::cleanup(){
	cout << "Cleaning up.." << endl;
}

// Set antialiasing to 4x
CINDER_APP( Cinder_101_001App, RendererGl( RendererGl::Options().msaa(4)))