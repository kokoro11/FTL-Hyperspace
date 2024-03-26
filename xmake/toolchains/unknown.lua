toolchain("unknown") do
    set_kind("standalone")
    on_check(function()
        raise("unknown toolchain: your platform is not supported")
    end)
    on_load(function()
        raise("unknown toolchain: your platform is not supported")
    end)
end toolchain_end()
