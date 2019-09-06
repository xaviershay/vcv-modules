#include "plugin.hpp"


Plugin *pluginInstance;


void init(Plugin *p) {
	pluginInstance = p;

	// Add modules here
	p->addModel(modelBypass);
	p->addModel(modelBypass2);
	p->addModel(modelPan);
}
