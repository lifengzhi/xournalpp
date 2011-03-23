/*
 * Xournal++
 *
 * XML Writer helper class
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */
// TODO: AA: type check

#ifndef __XMLSTROKENODE_H__
#define __XMLSTROKENODE_H__

#include "XmlNode.h"
#include "../../model/Point.h"

class XmlStrokeNode: public XmlNode {
public:
	XmlStrokeNode(const char * tag);
	~XmlStrokeNode();

public:
	void setPoints(Point * points, int pointLength);
	void setWidth(double width, double * widths, int widthsLength);

	virtual void writeOut(OutputStream * out);
private:
	Point * points;
	int pointLength;

	double width;

	double * widths;
	int widthsLength;
};

#endif /* __XMLSTROKENODE_H__ */
