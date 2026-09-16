#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
namespace ApplicationTheme { class AppThemeAPI; } 
namespace Microsoft { namespace WRL { class Details; } } 
class NetworkFlyoutTelemetry; 
class NetworkUX; 
class NetworkingTriageScenario; 
namespace Platform { class Details; } 
class SharedUtilities; 
namespace Windows { namespace ApplicationModel { namespace Core { class CoreApplication; } } } 
namespace Windows { class Foundation; } 
namespace Windows { namespace Internal { class PlatformExtensions; } } 
namespace Windows { namespace Networking { namespace Connectivity { class NetworkInformation; } } } 
namespace Windows { namespace Storage { class ApplicationData; } } 
namespace Windows { namespace UI { namespace Xaml { class Application; } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { class AutomationProperties; } } } } 
namespace Windows { namespace UI { namespace Xaml { class FrameworkElement; } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Hosting { class XamlPresenter; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Input { class FocusManager; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Resources { class CustomXamlResourceLoader; } } } } 
namespace Windows { namespace UI { namespace Xaml { class UIElement; } } } 
namespace Windows { namespace UI { namespace Xaml { class Window; } } } 
namespace XamlTypeInfo { namespace InfoProvider { namespace XamlTypeInfoProvider { class CriticalSection; } } } 
namespace std { class locale; } 
class tip2; 
class tson; 
class CoTaskMemFree; class Destroy; class ESimSettingProfileMetaData; class FEATURE_ERROR; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class HINSTANCE__; class HKEY__; class HSTRING__; class HTIPTEST__; class IActivationFactory; class IClassFactory; class IESimSettingApi; class IInspectable; class IStream; class IUnknown; class IWeakReference; class LeaveCriticalSection; class MBBUXViewProviderImpl; class MemberInfo; class NetworkFlyoutLogging; class NetworkFlyoutTelemetry; class NetworkUX; class NetworkUXViewProviderImpl; class NetworkingTriageScenario; class ReleaseSRWLockExclusive; class SharedUtilities; class StateSeparation; class TipReportingInfo; class TypeInfo; class VPNUXViewProviderImpl; class WiFiUXViewProviderImpl; class WilFailureReport; class WilFailureReportInformation; class XamlRuntimeSiteProviderImpl; class _CONTEXT; class _EVENT_FILTER_DESCRIPTOR; class _EXCEPTION_POINTERS; class _EXCEPTION_RECORD; class _GUID; class _Grp_t; class _Mbstatet; class _RO_REGISTRATION_COOKIE; class _RTL_CRITICAL_SECTION; class _RTL_RUN_ONCE; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class __abi_FTMWeakRefData; class __abi_IUnknown; class __abi___classObjectEntry; class __abi_dtor_helper; class __s_GUID; class __winRT; class _tlgProvider_t; class _tlgWrapSz; class _tlgWrapperByRef; class _tlgWrapperByVal; class g_hTracelogProvider; class lambda_0c35f08fa008bd0bd75f4471027a7740; class lambda_0e64988457575224279dcb6d61e61bdd; class lambda_124e6a81e2b051522b36c299b286ccc8; class lambda_13165a6152af9f82b1dc57088ec46aa2; class lambda_1a883e208844f3eae9c2331158ffd84d; class lambda_1a95cd8d85b7d6b9081cf9c6b51ab708; class lambda_1dfe18491bcca09701d8ccb01d0b0af4; class lambda_22a50b5f43020e9ff19675a057470a55; class lambda_270dd7c8248a5e0fc92e2fd68af0eec1; class lambda_2b46ef64144176b70bbcc759a5c7515f; class lambda_2c58248c87b8a653d445fb3ffc04ebd0; class lambda_316aff592dba6634f9119401da7ad9da; class lambda_328b8c2afac256ad68e07b026b34557b; class lambda_3fa8b2c8193a0f3144fc4b1b8f243931; class lambda_3fabe80208863ddbd396d30d465a3382; class lambda_490f70612226efbb87d4b96479cf4e9b; class lambda_4ed7be7defdab34187d2a8803b529032; class lambda_55558e17b7dfc9a8b29c0f2b1b7c753a; class lambda_6094115153231ead5c0d2b3f634f4dbf; class lambda_660b2b23f7ab6159b85d4021876d0d51; class lambda_6866816a78a6d207496e390afca0992b; class lambda_87679dfba2c7a6692143ea8ed3f25ad3; class lambda_92481ac8eb4a5c6cd13ac2f12b81fce3; class lambda_999f049a6c941f28665e8dcd9067c211; class lambda_a3050a43f3157934f354774ab3dd2e02; class lambda_ade8ff7b61449f4a251c6d604f4ca642; class lambda_b2187bab0231d309414f0a345ae03a8b; class lambda_be3e5d9dce35d2c8dbfa8485373731d5; class lambda_c780ffdee009f6592bd6ce66b4bf8ae4; class lambda_db3465cfbd0f07f60ced14c1ec9059f1; class lambda_de8c141b6091bfb16d646b8897195654; class lambda_e39e17dfdc87ef6015154b359314089f; class lambda_e68bb2fdc903576aafda4e5a85e058b6; class lambda_ea08c3b28c267bb88128d5cf16ce3636; class lambda_f1c4ca73c2d90813ed2e0a6c5e4e90de; class lambda_f90d3ceab56a76129aa7157aa5345f5c; class lambda_fa30a613036bcec23797998bf71b5136; class thunk; class tip2; class tson; class type_info; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace ABI { namespace Windows { namespace Internal { namespace ApplicationModel { namespace WindowManagement { class WindowId; } } } } } 
namespace ABI { namespace Windows { namespace Internal { namespace Foundation { namespace Contracts { class IActivationFactoryContractRedirectorContext; } } } } } 
namespace ABI { namespace Windows { namespace Internal { namespace UI { namespace Logon { namespace NetworkUX { class INetworkUXControllerInternal; } } } } } } 
namespace ApplicationTheme { class AppThemeAPI; } 
namespace CloudExperienceHostAPI { namespace Speech { class SpeechRecognition; class SpeechSynthesis; } } 
namespace CloudExperienceHostAPI { namespace Speech { namespace SpeechRecognitionKnownCommands { class Next; class No; class Yes; } } } 
namespace Concurrency { class cancellation_token; class cancellation_token_source; class invalid_operation; class scheduler_interface; class scheduler_ptr; class task; class task_canceled; class task_completion_event; class task_continuation_context; class task_options; } 
namespace Concurrency { namespace details { class _AsyncTaskGeneratorThunk; class _CancellationTokenRegistration; class _CancellationTokenState; class _ContextCallback; class _ContinuationTaskHandleBase; class _ExceptionHolder; class _TaskCreationCallstack; class _TaskProcHandle; class _Task_completion_event_impl; class _Task_impl; class _Task_impl_base; class _ThenImplOptions; class _TypeSelectorNoAsync; } } 
namespace Microsoft { namespace WRL { class ComPtr; class Details; class FtmBase; class RuntimeClassFlags; class SimpleSealedActivationFactory; } } 
namespace Microsoft { namespace WRL { namespace Wrappers { class HStringReference; } } } 
namespace OobeMainPageTipTest { class _tip_OobeInstallDriverButtonTest; } 
namespace Platform { class Agile; class Array; class Box; class Details; class EventSource; class Exception; class Guid; class Object; class String; class StringReference; class WeakReference; class WriteOnlyArray; } 
namespace Platform { namespace Collections { class Details; class VectorIterator; class VectorViewIterator; } } 
namespace QuickActions { class QuickActionTemplates; } 
namespace QuickActions { namespace ControlCenter { class ControlCenterTemplates; } } 
namespace SystemSettings { namespace DataModel { class ISettingItem; class ISettingsDatabase; class SettingsEnvironmentChangedHandler; class SettingsEnvironmentDatabase; } } 
namespace TestInfo_ODR_guard { class TestInfo; } 
namespace WiFiRefreshButtonTipTest { class _tip_WiFiConnectionAfterRefreshTest; } 
namespace Windows { class Foundation; } 
namespace Windows { namespace ApplicationModel { namespace Activation { class IActivatedEventArgs; class LaunchActivatedEventArgs; } } } 
namespace Windows { namespace ApplicationModel { namespace Core { class CoreApplication; class CoreApplicationView; class UnhandledErrorDetectedEventArgs; } } } 
namespace Windows { namespace Globalization { namespace ApplicationLanguages { class Languages; } } } 
namespace Windows { namespace Graphics { namespace Display { class DisplayInformation; } } } 
namespace Windows { namespace Internal { class PlatformExtensions; } } 
namespace Windows { namespace Internal { namespace ComposableShell { class ShellExperienceViewManager; } } } 
namespace Windows { namespace Internal { namespace ComposableShell { namespace LockManager { class CurrentLockState; } } } } 
namespace Windows { namespace Internal { namespace Shell { namespace Experience { class ShellExperience; class ShellExperienceReactivatedEventArgs; } } } } 
namespace Windows { namespace Internal { namespace UI { namespace XAMLHost { class TouchKeyboardChangedEventHandler; } } } } 
namespace Windows { namespace Media { namespace SpeechRecognition { class ISpeechRecognitionConstraint; class SpeechRecognitionResult; } } } 
namespace Windows { namespace Networking { namespace Connectivity { class ConnectionProfile; class ConnectionProfileFilter; class NetworkInformation; class NetworkStatusChangedEventHandler; } } } 
namespace Windows { namespace Networking { namespace UX { class AirplaneModeEventHandler; class IUXCategory; class IUXManager; class UXCategoryEventHandler; } } } 
namespace Windows { namespace Storage { class ApplicationData; class StorageFolder; } } 
namespace Windows { namespace System { class Launcher; class User; } } 
namespace Windows { namespace System { namespace Threading { class ThreadPool; class WorkItemHandler; } } } 
namespace Windows { namespace UI { class Color; class ColorHelper; } } 
namespace Windows { namespace UI { namespace Core { class CoreDispatcher; class CoreWindow; class CoreWindowEventArgs; class DispatchedHandler; class ICoreDispatcher; class KeyEventArgs; } } } 
namespace Windows { namespace UI { namespace ViewManagement { class AccessibilitySettings; class ApplicationView; class InputPane; class InputPaneVisibilityEventArgs; } } } 
namespace Windows { namespace UI { namespace Xaml { class Application; class DataTemplate; class DependencyObject; class DependencyProperty; class DependencyPropertyChangedEventArgs; class FrameworkElement; class GridLength; class PropertyChangedCallback; class PropertyMetadata; class ResourceDictionary; class RoutedEvent; class RoutedEventArgs; class RoutedEventHandler; class SizeChangedEventHandler; class SuspendingEventHandler; class Thickness; class UIElement; class UnhandledExceptionEventArgs; class UnhandledExceptionEventHandler; class VisualStateManager; class Window; class XamlRoot; } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { class AutomationProperties; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Automation { namespace Peers { class AutomationPeer; class FrameworkElementAutomationPeer; } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Controls { class ContentDialog; class ContentDialogClosedEventArgs; class ContentDialogOpenedEventArgs; class Control; class Frame; class IsTextTrimmedChangedEventArgs; class ItemsControl; class ListView; class ListViewBase; class SelectionChangedEventHandler; class TextBlock; class TextChangedEventHandler; class ToolTipService; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Controls { namespace Primitives { class ButtonBase; class Popup; class RangeBaseValueChangedEventHandler; } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Controls { namespace Primitives { namespace RangeBase { class ValueProperty; } } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Controls { namespace TextBox { class TextProperty; } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Data { class PropertyChangedEventArgs; class PropertyChangedEventHandler; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Hosting { class XamlPresenter; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Input { class DoubleTappedEventHandler; class FindNextElementOptions; class FocusManager; class FocusManagerGotFocusEventArgs; class KeyEventHandler; class TappedEventHandler; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Interop { class BindableVectorChangedEventHandler; class IBindableObservableVector; class TypeName; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Markup { class IXamlMember; class XmlnsDefinition; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { class AcrylicBrush; class SolidColorBrush; class VisualTreeHelper; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Media { namespace Animation { class TransitionCollection; } } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Navigation { class NavigatedEventHandler; class NavigationFailedEventArgs; class NavigationFailedEventHandler; } } } } 
namespace Windows { namespace UI { namespace Xaml { namespace Resources { class CustomXamlResourceLoader; } } } } 
namespace WindowsInternal { namespace ComposableShell { namespace ComposerHintsAPI { class ComposerHintPropertyProvider; } } } 
namespace XamlTypeInfo { namespace InfoProvider { class XamlUserType; } } 
namespace XamlTypeInfo { namespace InfoProvider { namespace XamlTypeInfoProvider { class CriticalSection; } } } 
namespace std { class _Bt_state_t; class _Buf; class _Cmp_icase; class _Facet_base; class _Func_base; class _Func_class; class _Func_impl_no_alloc; class _Iterator_base0; class _Loop_vals_t; class _Node_base; class _Node_class; class _Node_if; class _Node_rep; class _Regex_traits; class _Root_node; class _Sequence; class _Simple_types; class _String_constructor_concat_tag; class _String_iterator; class _String_val; class _Tgt_state_t; class _Tree_find_result; class _Tree_id; class _Tree_iterator; class _Tree_node; class _Tree_simple_types; class _Tree_unchecked_const_iterator; class _Tree_val; class _Value_init_tag; class _Vb_const_iterator; class _Vb_iterator; class _Vb_reference; class _Vector_const_iterator; class _Vector_iterator; class _Vector_val; class _Wrap_alloc; class allocator; class bad_alloc; class bad_array_new_length; class bad_cast; class basic_ostream; class basic_regex; class basic_streambuf; class basic_string; class char_traits; class collate; class ctype; class exception; class exception_ptr; class fpos; class function; class integral_constant; class less; class locale; class map; class match_results; class mutex; class nothrow_t; class nullptr_t; class once_flag; class pair; class piecewise_construct_t; class regex_iterator; class regex_token_iterator; class regex_traits; class runtime_error; class shared_ptr; class sub_match; class tuple; class vector; class weak_ptr; } 
namespace wil { class FailureInfo; class ResultException; class StoredFailureInfo; class com_ptr_t; class err_returncode_policy; class process_heap_deleter; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class FeatureLogging; class FeatureStateManager; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class default_delete; class function; class integral_constant; class unique_ptr; } 
namespace wistd { namespace __function { class __base; } } 

