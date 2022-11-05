#pragma once

#include "IFormTasks.h"

namespace nitisa
{
    namespace app
    {
        class CFormTasks :public IFormTasks
        {
        protected:
            // You may just copy declaration of the following methods from the IFormTasks.h and edit it a little to have following final result. 

            void EditTask_OnKeyUp(IControl* sender, const MessageKey& m, bool& processed) override;
            void ButtonDelete_OnClick(IControl* sender) override;
            void ButtonDeleteCompleted_OnClick(IControl* sender) override;
            void ButtonCompleteAll_OnClick(IControl* sender) override;
            void ButtonUncompleteAll_OnClick(IControl* sender) override;
            void ButtonClear_OnClick(IControl* sender) override;
        public:
            CFormTasks();
        };

        extern CFormTasks* FormTasks; // Declaration of the variable where the form instance will be stored 
    }
}