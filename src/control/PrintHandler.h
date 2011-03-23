/*
 * Xournal++
 *
 * Prints a document
 *
 * @author Xournal Team
 * http://xournal.sf.net
 *
 * @license GPL
 */
// TODO: AA: type check

#ifndef __PRINTHANDLER_H__
#define __PRINTHANDLER_H__

#include <gtk/gtk.h>

class Document;
class Settings;
class SElement;
class DocumentView;

class PrintHandler {
public:
	PrintHandler();
	virtual ~PrintHandler();

public:
	void print(Document * doc, int currentPage);

private:
	static void drawPage(GtkPrintOperation *operation, GtkPrintContext *context, int pageNr, PrintHandler * handler);
	static void requestPageSetup(GtkPrintOperation * operation, GtkPrintContext * context, gint pageNr,
			GtkPageSetup *setup, PrintHandler * handler);

private:
	DocumentView * view;
	Document * doc;
};

#endif /* __PRINTHANDLER_H__ */
