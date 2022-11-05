#include "Platform/Core/Window.h" // Include file where the window class is implemented 
#include "Platform/Core/Renderer.h" // Include file where the renderer class is implemented 
#include "FormTasks.h"

namespace nitisa
{
    namespace app
    {
        CFormTasks* FormTasks{ nullptr }; // Variable where the form instance will be stored 

        CFormTasks::CFormTasks() :
            IFormTasks(CWindow::Create(), CRenderer::Create())
        {

        }

        void CFormTasks::EditTask_OnKeyUp(IControl* sender, const MessageKey& m, bool& processed)
        {
            if (m.Key == Key::Return)
            {
                String name{ Trim(m_pEditTask->getText()) };
                if (!name.empty())
                    m_pListTasks->Add(name);
            }
        }

        void CFormTasks::ButtonDelete_OnClick(IControl* sender)
        {
            m_pListTasks->LockUpdate();
            for (int i = m_pListTasks->getItemCount() - 1; i >= 0; i--)
                if (m_pListTasks->getItem(i)->isSelected())
                    m_pListTasks->Delete(i);
            m_pListTasks->UnlockUpdate();
        }

        void CFormTasks::ButtonDeleteCompleted_OnClick(IControl* sender)
        {
            m_pListTasks->LockUpdate();
            for (int i = m_pListTasks->getItemCount() - 1; i >= 0; i--)
                if (m_pListTasks->isChecked(i))
                    m_pListTasks->Delete(i);
            m_pListTasks->UnlockUpdate();
        }

        void CFormTasks::ButtonCompleteAll_OnClick(IControl* sender)
        {
            m_pListTasks->LockUpdate();
            for (int i = m_pListTasks->getItemCount() - 1; i >= 0; i--)
                m_pListTasks->setChecked(i, true);
            m_pListTasks->UnlockUpdate();
        }

        void CFormTasks::ButtonUncompleteAll_OnClick(IControl* sender)
        {
            m_pListTasks->LockUpdate();
            for (int i = m_pListTasks->getItemCount() - 1; i >= 0; i--)
                m_pListTasks->setChecked(i, false);
            m_pListTasks->UnlockUpdate();
        }

        void CFormTasks::ButtonClear_OnClick(IControl* sender)
        {
            m_pListTasks->Clear();
        }
    }
}