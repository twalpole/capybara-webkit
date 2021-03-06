#include "CommandFactory.h"
#include "NullCommand.h"
#include "Visit.h"
#include "FindXpath.h"
#include "Reset.h"
#include "Node.h"
#include "Evaluate.h"
#include "Execute.h"
#include "FrameFocus.h"
#include "Header.h"
#include "Render.h"
#include "Body.h"
#include "Status.h"
#include "Headers.h"
#include "SetCookie.h"
#include "ClearCookies.h"
#include "GetCookies.h"
#include "SetProxy.h"
#include "ConsoleMessages.h"
#include "CurrentUrl.h"
#include "SetTimeout.h"
#include "GetTimeout.h"
#include "WindowResize.h"
#include "IgnoreSslErrors.h"
#include "SetSkipImageLoading.h"
#include "WindowFocus.h"
#include "GetWindowHandles.h"
#include "GetWindowHandle.h"
#include "WebPageManager.h"
#include "Authenticate.h"
#include "EnableLogging.h"
#include "SetConfirmAction.h"
#include "SetPromptAction.h"
#include "SetPromptText.h"
#include "ClearPromptText.h"
#include "JavascriptAlertMessages.h"
#include "JavascriptConfirmMessages.h"
#include "JavascriptPromptMessages.h"
#include "SetUrlBlacklist.h"
#include "Version.h"
#include "Title.h"
#include "FindCss.h"
#include "WindowClose.h"
#include "WindowOpen.h"
#include "WindowSize.h"
#include "WindowMaximize.h"
#include "GoBack.h"
#include "GoForward.h"
#include "Refresh.h"
#include "AcceptAlert.h"
#include "FindModal.h"
#include "SetUnknownUrlMode.h"
#include "AllowUrl.h"
#include "BlockUrl.h"

CommandFactory::CommandFactory(WebPageManager *manager, QObject *parent) : QObject(parent) {
  m_manager = manager;
}

Command *CommandFactory::createCommand(const char *name, QStringList &arguments) {
  #include "find_command.h"
  return new NullCommand(QString(name));
}
