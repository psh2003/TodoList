// This file was generated by Form Builder from Nitisa C++ GUI framework
// Framework site: http://nitisa.com
// Framework download: http://nitisa.com/downloads
// Framework documentation: http://nitisa.com/documentation
// Framework license: http://nitisa.com/site/license
// Form Builder version: 13.0.0
// Form Builder documentation: http://nitisa.com/guide/form-builder
// Generated: 2022-11-05 13:52:35

// !!! ATTENTION !!!
// This is an auto-generated file with form declaration and initialization.
// Include it into your form class header file and derive your form from the class implemented here.
// Add constructor and implement event processing methods(if exist) from "protected" section.
// For example:
//     FormTasks.h:
//         #include "IFormTasks.h" // Include this file
//
//         namespace nitisa
//         {
//             class IControl;
//
//             namespace app
//             {
//                 class CFormTasks : public IFormTasks // Derive your form from class from this file
//                 {
//                 protected: // Declare overridden methods handling events if there ones in this class
//                     void ButtonAdd_OnClick(IControl *sender) override;
//                 public:
//                     CFormTasks(); // Declare constructor
//                 };
//             }
//         }
//
//     FormTasks.cpp:
//         #include "Standard/Platform/Windows/Window.h" // Include required platform window management class
//         #include "Standard/Platform/Windows/OpenGL/Renderer.h" // Include required renderer
//         #include "FormTasks.h" // Include header class of your form
//
//         namespace nitisa
//         {
//             namespace app
//             {
//                 CFormTasks::CFormTasks(): // Implement constructor of your form
//                     IFormTasks(new standard::windows::CWindow(), new standard::windows::opengl::CRenderer(false, 0))
//                 {
//                     // Insert your code here
//                 }
//
//                 void CFormTasks::ButtonAdd_OnClick(IControl *sender) // Implement event processing methods
//                 {
//                     // Insert your code here
//                 }
//             }
//         }


#pragma once

#include "Nitisa/Core/Font.h"
#include "Nitisa/Core/FontWeight.h"
#include "Nitisa/Core/Form.h"
#include "Nitisa/Core/LockRepaint.h"
#include "Nitisa/Core/Messages.h"
#include "Nitisa/Core/RotateOrder.h"
#include "Nitisa/Core/Strings.h"
#include "Nitisa/Core/TransformOrder.h"
#include "Nitisa/Core/Utils.h"
#include "Nitisa/Image/Color.h"
#include "Nitisa/Interfaces/IApplication.h"
#include "Nitisa/Interfaces/IApplicationService.h"
#include "Nitisa/Interfaces/IFormService.h"
#include "Nitisa/Interfaces/ITransform.h"
#include "Nitisa/Math/Point.h"
#include "Nitisa/Math/PointF.h"
#include "Nitisa/Math/Transform.h"
#include "Standard/Controls/Button/Button.h"
#include "Standard/Controls/CheckListBox/CheckListBox.h"
#include "Standard/Controls/Edit/Edit.h"
#include "Standard/Controls/ListBox/CustomListBox.h"
#include "Standard/ListItems/CheckBox/ListItemCheckBox.h"

namespace nitisa
{
	class IControl;
	class IRenderer;
	class IWindow;
	struct CreateParams;

	namespace app
	{
		class IFormTasks : public CForm
		{
		protected:
			// Controls
			standard::CEdit *m_pEditTask;
			standard::CCheckListBox *m_pListTasks;
			standard::CButton *m_pButtonDelete;
			standard::CButton *m_pButtonDeleteCompleted;
			standard::CButton *m_pButtonCompleteAll;
			standard::CButton *m_pButtonUncompleteAll;
			standard::CButton *m_pButtonClear;

		protected:
			// Events(Should be implemented in derived widget)
			virtual void EditTask_OnKeyUp(IControl *sender, const MessageKey &m, bool &processed) = 0;
			virtual void ButtonDelete_OnClick(IControl *sender) = 0;
			virtual void ButtonDeleteCompleted_OnClick(IControl *sender) = 0;
			virtual void ButtonCompleteAll_OnClick(IControl *sender) = 0;
			virtual void ButtonUncompleteAll_OnClick(IControl *sender) = 0;
			virtual void ButtonClear_OnClick(IControl *sender) = 0;

		private:
			void Initialize()
			{
				// Create controls
				m_pEditTask = new standard::CEdit(this);
				m_pEditTask->setName(L"EditTask");
				m_pListTasks = new standard::CCheckListBox(this);
				m_pListTasks->setName(L"ListTasks");
				m_pButtonDelete = new standard::CButton(this);
				m_pButtonDelete->setName(L"ButtonDelete");
				m_pButtonDeleteCompleted = new standard::CButton(this);
				m_pButtonDeleteCompleted->setName(L"ButtonDeleteCompleted");
				m_pButtonCompleteAll = new standard::CButton(this);
				m_pButtonCompleteAll->setName(L"ButtonCompleteAll");
				m_pButtonUncompleteAll = new standard::CButton(this);
				m_pButtonUncompleteAll->setName(L"ButtonUncompleteAll");
				m_pButtonClear = new standard::CButton(this);
				m_pButtonClear->setName(L"ButtonClear");

				// Initialize controls
				m_pEditTask->setName(L"EditTask");
				{
					CFont font;
					font.setFontName(L"Tahoma");
					font.setHeight(-21);
					font.setWeight(FontWeight::Normal);
					font.setDistance(0.0f);
					font.setColor(Color{ 0, 0, 0, 255 });
					font.setShadowShift(PointF{ 0.0f, 0.0f });
					font.setShadowRadius(1);
					font.setShadowColor(Color{ 0, 0, 0, 0 });
					font.setItalic(false);
					font.setUnderline(false);
					font.setStrikeOut(false);
					font.setMonospace(false);
					m_pEditTask->setFont(&font);
				}
				m_pEditTask->getTransform()->Translate(8.0f, 8.0f, 0.0f);
				m_pEditTask->setSize(PointF{ 392.0f, 37.0f });
				m_pEditTask->setTabOrder(1);
				m_pEditTask->setUseParentFont(false);
				m_pEditTask->setText(UTF8ToString(""));
				m_pEditTask->OnKeyUp = [](IControl *sender, const MessageKey &m, bool &processed)->void { cast<IFormTasks*>(sender->getForm())->EditTask_OnKeyUp(sender, m, processed); };

				m_pListTasks->setName(L"ListTasks");
				{
					CFont font;
					font.setFontName(L"Tahoma");
					font.setHeight(-19);
					font.setWeight(FontWeight::Normal);
					font.setDistance(0.0f);
					font.setColor(Color{ 0, 0, 0, 255 });
					font.setShadowShift(PointF{ 0.0f, 0.0f });
					font.setShadowRadius(1);
					font.setShadowColor(Color{ 0, 0, 0, 0 });
					font.setItalic(false);
					font.setUnderline(false);
					font.setStrikeOut(false);
					font.setMonospace(false);
					m_pListTasks->setFont(&font);
				}
				m_pListTasks->getTransform()->Translate(8.0f, 56.0f, 0.0f);
				m_pListTasks->setSize(PointF{ 393.0f, 193.0f });
				m_pListTasks->setTabOrder(2);
				m_pListTasks->setUseParentFont(false);
				m_pListTasks->setMultiselect(true);

				m_pButtonDelete->setName(L"ButtonDelete");
				m_pButtonDelete->getTransform()->Translate(416.0f, 56.0f, 0.0f);
				m_pButtonDelete->setSize(PointF{ 128.0f, 31.0f });
				m_pButtonDelete->setTabOrder(3);
				m_pButtonDelete->setCaption(UTF8ToString("Delete Selected"));
				m_pButtonDelete->OnClick = [](IControl *sender)->void { cast<IFormTasks*>(sender->getForm())->ButtonDelete_OnClick(sender); };

				m_pButtonDeleteCompleted->setName(L"ButtonDeleteCompleted");
				m_pButtonDeleteCompleted->getTransform()->Translate(416.0f, 96.0f, 0.0f);
				m_pButtonDeleteCompleted->setSize(PointF{ 128.0f, 31.0f });
				m_pButtonDeleteCompleted->setTabOrder(4);
				m_pButtonDeleteCompleted->setCaption(UTF8ToString("Delete Completed"));
				m_pButtonDeleteCompleted->OnClick = [](IControl *sender)->void { cast<IFormTasks*>(sender->getForm())->ButtonDeleteCompleted_OnClick(sender); };

				m_pButtonCompleteAll->setName(L"ButtonCompleteAll");
				m_pButtonCompleteAll->getTransform()->Translate(416.0f, 136.0f, 0.0f);
				m_pButtonCompleteAll->setSize(PointF{ 128.0f, 31.0f });
				m_pButtonCompleteAll->setTabOrder(5);
				m_pButtonCompleteAll->setCaption(UTF8ToString("Complete All"));
				m_pButtonCompleteAll->OnClick = [](IControl *sender)->void { cast<IFormTasks*>(sender->getForm())->ButtonCompleteAll_OnClick(sender); };

				m_pButtonUncompleteAll->setName(L"ButtonUncompleteAll");
				m_pButtonUncompleteAll->getTransform()->Translate(416.0f, 176.0f, 0.0f);
				m_pButtonUncompleteAll->setSize(PointF{ 128.0f, 31.0f });
				m_pButtonUncompleteAll->setTabOrder(6);
				m_pButtonUncompleteAll->setCaption(UTF8ToString("Make All Uncompleted"));
				m_pButtonUncompleteAll->OnClick = [](IControl *sender)->void { cast<IFormTasks*>(sender->getForm())->ButtonUncompleteAll_OnClick(sender); };

				m_pButtonClear->setName(L"ButtonClear");
				m_pButtonClear->getTransform()->Translate(416.0f, 216.0f, 0.0f);
				m_pButtonClear->setSize(PointF{ 128.0f, 31.0f });
				m_pButtonClear->setTabOrder(7);
				m_pButtonClear->setCaption(UTF8ToString("Delete All"));
				m_pButtonClear->OnClick = [](IControl *sender)->void { cast<IFormTasks*>(sender->getForm())->ButtonClear_OnClick(sender); };


			}

		public:
			IFormTasks(IWindow *window, IRenderer *renderer, const String &class_name = L"FormTasks", const CreateParams *params = nullptr) :
				CForm(class_name, nullptr, renderer, params),
				m_pEditTask{ nullptr },
				m_pListTasks{ nullptr },
				m_pButtonDelete{ nullptr },
				m_pButtonDeleteCompleted{ nullptr },
				m_pButtonCompleteAll{ nullptr },
				m_pButtonUncompleteAll{ nullptr },
				m_pButtonClear{ nullptr }
			{
				if (window)
				{
					CLockRepaint lock(this);
					setName(L"FormTasks");
					setCaption(UTF8ToString("Todo list"));
					setClientSize(Point{ 555, 261 });
					QueryService()->setWindow(window);
					Application->QueryService()->Add(this);
					Initialize();
					Repaint(Rect{ 0, 0, 0, 0 }, true);
				}
			}
		};
	}
}
