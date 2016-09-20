<?hh

  namespace plenty_plugin_test_1\provider;

  class PluginTestServiceProvider extends ServiceProvider{

    // register
    public function register():void{
        $this->getApplication()->register( PluginTestRouteServiceProvider::class );
    }
  }
