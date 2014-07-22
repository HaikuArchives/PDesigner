#ifndef PROPINTEGEREDITOR_H
#define PROPINTEGEREDITOR_H

#include <String.h>

#include "NumBox.h"
#include "PropEditor.h"


class PObject;
class PProperty;

class PropIntegerEditor : public PropertyEditor
{
public:
								PropIntegerEditor(PObject *obj, PProperty *prop);
								~PropIntegerEditor(void);
	
	virtual	void				Update(void);
	virtual	status_t			SetProperty(PObject *obj, PProperty *prop);
	virtual	void				SetTarget(BHandler *handler, BLooper *looper = NULL);
	
	virtual	bool				HandlesType(const BString &type);
	virtual	PropertyEditor *	CreateInstance(PObject *obj, PProperty *prop);
	
	virtual	void				AttachedToWindow(void);
	virtual	void				MessageReceived(BMessage *msg);
	
	
private:
	NumBox				*fEditor;
	BMessenger			*fMsgr;
	BString				*fPropName;
};

#endif
