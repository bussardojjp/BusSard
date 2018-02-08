#ifndef GUI_DetailView_h
#define GUI_DetailView_h

#include <vector>


namespace GUI {
class MainFrame;
class MemberView;
} /* End of namespace GUI */

namespace GUI {

class DetailView {

 public:

    MainFrame *myMainFrame;

    /**
     * @element-type MemberView
     */
    std::vector< MemberView* > myMemberView;
};

} /* End of namespace GUI */

#endif // GUI_DetailView_h
