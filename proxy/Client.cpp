#include "Document.h"
#include "Proxy.h"

int main()
{
    Document doc;

    doc.addGlyph(new ImageProxy("a.jpg"));
    doc.addGlyph(new ImageProxy("b.jpg"));

    doc.show();

    return 0;
}
