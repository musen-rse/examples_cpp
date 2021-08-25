#include "datamodel.h"
#include "chartview.h"
#include "lineview.h"
#include "barview.h"

int main(int argc, char *argv[])
{
    std::cout << "\n\nObserver example ....\n\n";
    
    DataModel* dataModel = new DataModel();

    ChartView* chartView = new ChartView();
    dataModel->attachView(chartView);

    LineView* lineView = new LineView();
    dataModel->attachView(lineView);

    BarView* barView = new BarView();
    dataModel->attachView(barView);

    dataModel->setData("Info 1");
    dataModel->setData("Info 2");

    delete lineView;
    delete chartView;
    delete barView;
    delete dataModel;

    return 0;
}
