#ifndef slic3r_GUI_CalibrationTempDialog_hpp_
#define slic3r_GUI_CalibrationTempDialog_hpp_

#include <wx/wx.h>
#include <map>
#include <vector>

#include "GUI_App.hpp"
#include "GUI_Utils.hpp"
#include "MainFrame.hpp"
#include "wxExtensions.hpp"
#include <wx/html/htmlwin.h>

namespace Slic3r { 
namespace GUI {

class CalibrationTempDialog : public DPIDialog
{

public:
    CalibrationTempDialog(GUI_App* app, MainFrame* mainframe);
    
protected:
    void on_dpi_changed(const wxRect &suggested_rect) override;

private:
    void create_geometry(wxCommandEvent& event_args);
    wxPanel* create_header(wxWindow* parent, const wxFont& bold_font);

    wxHtmlWindow* html_viewer;
    MainFrame* main_frame;
    GUI_App* gui_app;

};

} // namespace GUI
} // namespace Slic3r

#endif
