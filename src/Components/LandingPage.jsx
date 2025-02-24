import React from 'react';
import gsap from 'gsap';
import FOT_website from '../assets/FOT_website.svg';
import insta from '../assets/Spandan_insta.svg';
import playbtn from '../assets/play.svg';
import headText from '../assets/heading.svg';
import gmail from '../assets/gmail.svg';
import vdo from '../assets/intro.mp4';
import logo from '../assets/duLogo.svg';
const LandingPage = () => {

    const loadAnimation = () => {
        window.onload = () => {
            const play = document.getElementById('play');
            const welcome = document.getElementById('welcome');
            const to = document.getElementById('to');
            const playsq = document.getElementById('playsq');
            const heading = document.getElementById('heading');

            gsap.fromTo(welcome, {
                y: 100,
                opacity: 0.2
            }, {
                y: 0,
                opacity: 1,
                duration: 1,
                delay: 0,
                ease: "power2.out"
            });
            
            gsap.fromTo(to, {
                y: 100,
                opacity: 0
            }, {
                y: 0,
                opacity: 1,
                duration: 1,
                delay: 0.3,
                ease: "power2.out"
            });
            
            gsap.from(play,{
                opacity:0,
            });

            gsap.fromTo(playsq, {
                x: -380,
                y: -150,
                opacity: 0,
            }, {
                x: 380,
                opacity: 0,
                duration: 0.8,
                delay: 0.9,
                ease: "power2.out",})

            gsap.fromTo(play, {
                x: -380,
                y: -130,
                opacity: 1
            }, {
                x: 380,
                opacity: 1,
                duration: 0.8,
                delay: 0.9,
                ease: "power2.out",
                onComplete: ()=>{
                    gsap.fromTo(heading,{
                        y:180,
                    },{
                        y:80,
                        opacity:1,
                        duration:1,
                    })
                    gsap.to(welcome,{
                        opacity:0,
                        duration:0.8, 
                    })
                    gsap.to(to,{
                        opacity:0,
                        duration:0.8,
                    })
                    gsap.to(play,{
                        y:0,
                        x:0,
                        scale:0.8,
                        duration:0.5,
                        ease: 'power2.inout',
                    });
                        
                    gsap.fromTo(playsq,{
                        opacity: 0,
                        y:0,
                        x:0,
                        scale:1,
                    },{
                        opacity:1,
                        scale:1,
                        y:0,
                        x:0,
                        duration: 0.5,
                        ease: 'power2.inout',
                        onComplete: ()=>{
                            gsap.fromTo(playsq,{
                                opacity:1,
                            },{
                                opacity:1,
                                rotation:360,
                                duration:2,
                                delay:0,
                                repeat:Infinity,
                            })
                        }
                    })
                        
                }
            });
            play.addEventListener('click',()=>{
                const vdo = document.getElementById('vdo');
                console.log(vdo);
                vdo.play()
                    .catch(error => {
                        console.error("Error playing video:", error);
                    });
            })
        }
    }
    loadAnimation();

    return (
        <>
        <div className='h-screen w-screen bg-black text-white overflow-hidden relative'>
            <div className='fixed h-screen w-screen bg-gray-900 -z' hidden>
                <video id='vdo' className='h-full w-full object-cover' src={vdo} ></video>
            </div>
            <div className='w-screen h-[12%] flex justify-between px-8 py-5 not-sm:flex-col not-sm:h-[18%]'>
                <img className='z-20 mb-8 w-16 h-16' src={logo} alt="Logo" />
                <div className='flex gap-4 not-sm:w-full not-sm:justify-center z-60'>
                    <a href="/events">
                    <button className='px-5 py-3 not-sm:px-6 not-sm:py-3 font-bold text-lg text-white border italic border-white hover:cursor-pointer rounded-xl'>Events</button>
                    </a>
                    <a href="/gallery">
                    <button className='px-5 py-3 not-sm:px-6 not-sm:py-3 font-bold text-lg text-white border italic  border-white hover:cursor-pointer rounded-xl'>Gallery</button>
                    </a>
                </div>
            </div>
            <div className='w-screen h-screen absolute flex items-center justify-center top-0 z-50'>
                    <div className='w-[689px] h-[400px]'>
                    <div className='h-fit w-fit top-0 flex absolute mt-30 not-sm:mt-50 not-sm:text-center not-sm:block'>
                        <h1 id='welcome' className='not-sm:scale-40 not-sm:-ml-44'>Welcome</h1><h1 id='to' className='-ml-45 not-sm:scale-40 not-sm:-ml-44'>to..</h1>
                        <h1 id='heading' className='absolute opacity-0 ml-8 not-sm:opacity-1'><img src={headText} alt="Spandan_heading" /></h1>
                    </div>
                    <div id='playsq' className='opacity-0 h-24 w-24 border-6 border-dashed rounded-full mx-auto mt-40 not-sm:scale-100'>
                    </div>
                        <img src={playbtn} id='play' className='opacity-0 h-16 w-16 absolute -mt-20 ml-79 not-sm:ml-53 not-sm:scale-0.8 hover:cursor-pointer' alt=""/>
                    </div>
            </div>
            <div className='w-screen h-[15%] absolute bottom-0 flex justify-between px-8 py-2 items-start not-sm:justify-center'>
                <div className='h-44 w-2/5 my-auto'>
                    <h1 className='text-2xl font-black p-3 border-t-4 not-sm:scale-0'>Faculty of Technology, University of Delhi</h1>
                </div>
                <div className='flex gap-6 pt-4 px-4 items-center justify-between not-sm:absolute z-70 not-sm:-mt-20'>
                    <a href="mailto:spandan.fot@gmail.com">
                    <img className='not-sm:scale-110' src={gmail} width={54} height={54} alt="gmail@fot" />
                    </a>
                    <a href="https://fot.du.ac.in/">
                    <img className='not-sm:scale-120 not-sm:-ml-1' src={FOT_website} width={36} height={36} alt="FOT_Website" />
                    </a>
                    <a href="https://www.instagram.com/spandan.fot/">
                    <img className='not-sm:scale-120' src={insta} width={39} height={39} alt="Spandan_insta" />
                    </a>
                </div>
            </div>
        </div>
        </>
    );
}

export default LandingPage;